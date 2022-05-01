#ifndef _CONSISTENT_H_
#define _CONSISTENT_H_
#include <map>
#include <mutex>
#include <set>
#include <string>
#include <vector>

using std::map;
using std::mutex;
using std::set;
using std::string;
struct Consistent {
 public:
  int32_t Add(const string& key);
  std::string Get(const std::string& key) {
    uint32_t h = Hash(key);
    auto it = slots.lower_bound(h);
    if (it == slots.end()) {
      return slots.begin()->second;
    }
    return it->second;
  }
  uint32_t Hash(std::string key) {
    const int p = 16777619;
    uint32_t hash = 2166136261;
    for (int idx = 0; idx < key.size(); ++idx) {
      hash = (hash ^ key[idx]) * p;
    }
    hash += hash << 13;
    hash ^= hash >> 7;
    hash += hash << 3;
    hash ^= hash >> 17;
    hash += hash << 5;
    if (hash < 0) {
      hash = -hash;
    }
    return hash;
  }
  int Remove(const std::string& key) {
    mutex_.lock();
    for (int i = 0; i < replicate; ++i) {
      uint32_t h = Hash(key + std::to_string(i));
      slots.erase(h);
      sort_.erase(h);
    }
    mutex_.unlock();
  }

 private:
  map<uint32_t, string> slots;
  map<string, bool> members;
  uint32_t replicate;
  set<uint32_t> sort_;
  mutex mutex_;
};

#endif