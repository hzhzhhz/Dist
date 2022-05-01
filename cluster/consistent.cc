#include "consistent.h"

int32_t Consistent::Add(const std::string& key) {
  mutex_.lock();
  if (members.find(key) != members.end()) {
    return 0;
  }
  members[key] = true;
  for (int i = 0; i < replicate; ++i) {
    uint32_t h = Hash(key + std::to_string(i));
    slots[h] = key;
    sort_.insert(h);
  }
  mutex_.unlock();
  return 0;
}
std::string Consistent::Get(const std::string& key) {
  uint32_t h = Hash(key);
  auto it = slots.lower_bound(h);
  if (it == slots.end()) {
    return slots.begin()->second;
  }
  return it->second;
}