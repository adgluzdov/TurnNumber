#include <gtest/gtest.h>
#include "turn.h"
#include <cstdlib>

using namespace std;

TEST(sred, NULL) {
	EXPECT_EQ(turning(0),0);
}
TEST(sred, positive) {
	EXPECT_EQ(turning(-123),-321);
}
TEST(sred, negative) {
	EXPECT_EQ(turning(123),321);
}
TEST(sred, LONG_positive) {
	EXPECT_EQ(turning(123456789),987654321);
}
TEST(sred, LONG_negative) {
	EXPECT_EQ(turning(-123456789),-987654321);
}


int main(int ac, char* av[]) {
	testing::InitGoogleTest(&ac, av);
	int returnable = RUN_ALL_TESTS();
	system("pause");
	return returnable;
}