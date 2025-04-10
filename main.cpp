#include "gmock/gmock.h"
#include <iostream>

class Cal {
public:
  // 이곳에 코드 작성
	int getDivide(int a, int b) {
		if (b == 0)
		{
            std::cout << "b should be not 0\n";

            return 0;
		}

		return a / b; 
	}
};

// 테스트 케이스 작성
TEST(calTest, divide) {
  Cal cal;
  EXPECT_EQ(2, cal.getDivide(6, 3));
  EXPECT_EQ(0, cal.getDivide(18, 0));
}

int main() {
  ::testing::InitGoogleMock();
  return RUN_ALL_TESTS();
}
