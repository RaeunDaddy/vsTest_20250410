#include "gmock/gmock.h"

class Cal
{
public:
  // 이곳에 코드 작성
  int getZegop(int a) : return a * a;
};

// 테스트 케이스 작성
TEST(t1, t2)
{
  Cal cal;
  EXPECT_EQ(1, 1);
  EXPECT_EQ(cal.getZegop(2), 4);
}

int main()
{
  ::testing::InitGoogleMock();
  return RUN_ALL_TESTS();
}
