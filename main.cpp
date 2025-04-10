#include "gmock/gmock.h"

class Gop
{
public:
	// 이곳에 코드 작성
	int getGop(int a, int b) { return a * b; }
};

// 테스트 케이스 작성
TEST(Gop, test)
{
	Gop gop;
	EXPECT_EQ(gop.getGop(2, 4), 8);
}

int main()
{
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}
