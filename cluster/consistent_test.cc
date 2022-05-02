#include "cluster/consistent.h"

#include "gflags/gflags.h"
#include "gtest/gtest.h"

class ConsTest : public testing::Test {
 public:
  virtual void TearDown() {}
  virtual void SetUp() {}
};
TEST_F(ConsTest, t) {
  Consistent con(3);
  con.Add("aaa");
  string res = "aaa";
  EXPECT_EQ(con.Get("c"), res);
  return ;
}