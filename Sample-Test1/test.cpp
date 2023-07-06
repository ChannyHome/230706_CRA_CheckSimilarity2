#include "pch.h"
#include "../230706_CRA_CheckSimilarity/CheckSimilar.cpp"
#include "../230706_CRA_CheckSimilarity/CheckAlpha.cpp"

TEST(TestCheckAlpha, TestCheckAlpha1) {

	CheckAlpha alpha1{ "ASD","ADS" };
	EXPECT_EQ(40, alpha1.getAplphaPoint());
}

TEST(TestCheckAlpha, TestCheckAlpha2) {

	CheckAlpha alpha1{ "A","BB" };
	EXPECT_EQ(0, alpha1.getAplphaPoint());
}

TEST(TestCheckAlpha, TestCheckAlpha3) {

	CheckAlpha alpha1{ "AAABB","BA" };
	EXPECT_EQ(40, alpha1.getAplphaPoint());
}

TEST(TestCheckAlpha, TestCheckAlpha4) {

	CheckAlpha alpha1{ "AA","AAE" };
	EXPECT_EQ(20, alpha1.getAplphaPoint());
}