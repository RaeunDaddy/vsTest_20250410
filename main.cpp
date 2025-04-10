#include "gmock/gmock.h"

class Cal {
public:
  // 이곳에 코드 작성
int getSum(int a, int b) { return a + b; }
};

// 테스트 케이스 작성
TEST(t1, sum) {
  Cal cal;
  EXPECT_EQ(3, cal.getSum(1, 2));
}
TEST(t1, t2) {
  EXPECT_EQ(1, 1);
}

int main() {
  ::testing::InitGoogleMock();
  return RUN_ALL_TESTS();
}
