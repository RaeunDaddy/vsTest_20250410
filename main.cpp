#include <iostream>
#include "gmock/gmock.h"

using std::cout;

class Cal {
public:
	// 이곳에 코드 작성
	int getMinus(int first, int second) {
		int result = first - second;
		if (first < second && result > first)
			std::cout << "possibly underflow, please check the value range of operand type.\n";
		return result;
	}
};

// 테스트 케이스 작성
TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(OpMinus_TS, PositiveTC1) {
	Cal calTest;

	int result = calTest.getMinus(10, 10);
	int expected = 0;
	EXPECT_EQ(expected, result);
}
TEST(OpMinus_TS, NegativeTC2) {
	Cal calTest;

	int result = calTest.getMinus(-2147483648, 2);

	EXPECT_TRUE((result > 0));
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
