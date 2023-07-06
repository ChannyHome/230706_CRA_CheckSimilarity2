#include "pch.h"
#include "../230706_CRA_CheckSimilarity/CheckSimilar.cpp"
#include "../230706_CRA_CheckSimilarity/CheckLength.cpp"
#include "../230706_CRA_CheckSimilarity/cal.cpp"

TEST(TestLengthCheck, TestLengthCheck1) {

	CheckLength length{ "ABC", "BBY" };
	EXPECT_EQ(60, (int)length.getLengthPoint());
}

TEST(TestLengthCheck, TestLengthCheck2) {

	CheckLength length{ "ABC", "BBTIUR" };
	EXPECT_EQ(0, (int)length.getLengthPoint());
}

TEST(TestLengthCheck, TestLengthCheck3) {

	CheckLength length{ "ABC", "BBTIR" };
	EXPECT_EQ(20, (int)length.getLengthPoint());
}

TEST(TestLengthCheck, TestLengthCheck4) {

	CheckLength length{ "BBTIR", "ABC" };
	EXPECT_EQ(20, (int)length.getLengthPoint());
}

//°­»ç´Ô Length
TEST(Similer, LengthPointSame) {
	string input1 = "ABC";
	string input2 = "BBT";
	int expected = 60;

	Cal cal;
	int actual = cal.getLengthPoint(input1, input2);
	EXPECT_EQ(expected, actual);
}

TEST(Similer, LengthPointDoubleGap) {
	string input1 = "ABC";
	string input2 = "BBTIUR";
	int expected = 0;

	Cal cal;
	int actual = cal.getLengthPoint(input1, input2);
	EXPECT_EQ(expected, actual);
}

TEST(Similer, LengthPointPartial) {
	string input1 = "ABC";
	string input2 = "BBTIR";
	int expected = 20;


	Cal cal;
	int actual = cal.getLengthPoint(input1, input2);
	EXPECT_EQ(expected, actual);
}
