#include "pch.h"
#include "../230706_CRA_CheckSimilarity/CheckSimilar.cpp"
#include "../230706_CRA_CheckSimilarity/CheckLength.cpp"

TEST(TestLengthCheck, TestLengthCheck) {

	CheckLength length{ "ABC", "BBY" };
	EXPECT_EQ(60, length.getLengthPoint());
}