#ifndef _ROCKS_H_
#define _ROCKS_H_

#include <rocksdb/rocksdb.h>
class Storage {
 public:
  Storage() {}
  int Init();
  ~Storage() {}
};
#endif