#ifndef _META_META_H_
#define _META_META_H_
#include "floyd/include/floyd.h"
#include "proto/meta.pb.h"
#include "slash/include/slash_status.h"

using Meta::MetaCmdRequest;
using Meta::MetaCmdResponse;

class Cmd {
 public:
  virtual int Command(const MetaCmdRequest* request,
                      MetaCmdResponse* reply) = 0;
};

class PingCmd : public Cmd {
  int Command(const MetaCmdRequest* request, MetaCmdResponse* reply) {}
};
class PullCmd : public Cmd {
  int Command(const MetaCmdRequest* request, MetaCmdResponse* reply) {}
};
class MetaServer {
 private:
  Cmd* cmd_;
  floyd::Floyd* floyd_;
};
#endif