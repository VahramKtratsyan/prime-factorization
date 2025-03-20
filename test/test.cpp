#include <gtest/gtest.h>
#include "functions.hpp"

TEST(PrimeFactorize, ZeroAndOneDontHavePrimeFactors)
{
    ASSERT_EQ(primeFactorize(0).size(), 0);
    ASSERT_EQ(primeFactorize(1).size(), 0);
}

TEST(PrimeFactorize, PrimeFactorIsNotDefinedForNegativeIntegers)
{
    ASSERT_EQ(primeFactorize(-1).size(), 0);
    ASSERT_EQ(primeFactorize(-8).size(), 0);
    ASSERT_EQ(primeFactorize(-5648).size(), 0);
}

TEST(primeFactorize, ThePrimeFactorOfTwoIsTwo)
{
    ASSERT_EQ(primeFactorize(2).size(), 1);
    ASSERT_EQ(primeFactorize(2)[0], 2);
}

TEST(primeFactorize, ThePrimeFactorOfTreeIsTree)
{
    ASSERT_EQ(primeFactorize(3).size(), 1);
    ASSERT_EQ(primeFactorize(3)[0], 3);
}

TEST(primeFactorize, ThePrimeFactorsOfFourAreTwoAndTwo)
{
    ASSERT_EQ(primeFactorize(4).size(), 2);
    ASSERT_EQ(primeFactorize(4)[0], 2);
    ASSERT_EQ(primeFactorize(4)[1], 2);
}

TEST(primeFactorize, ThePrimeFactorsOf125AreFiveFiveANdFIve)
{
    ASSERT_EQ(primeFactorize(125).size(), 3);
    ASSERT_EQ(primeFactorize(125)[0], 5);
    ASSERT_EQ(primeFactorize(125)[1], 5);
    ASSERT_EQ(primeFactorize(125)[2], 5);
}

TEST(primeFactorize, ThePrimeFactorsOfSixtyAreTwoTwoTreeAndFive)
{
    ASSERT_EQ(primeFactorize(60).size(), 4);
    ASSERT_EQ(primeFactorize(60)[0], 2);
    ASSERT_EQ(primeFactorize(60)[1], 2);
    ASSERT_EQ(primeFactorize(60)[2], 3);
    ASSERT_EQ(primeFactorize(60)[3], 5);
}

TEST(primeFactorize, ThePrimeFactorsOf35948AreTwoTwoElevenNineteenFortythree)
{
    ASSERT_EQ(primeFactorize(35948).size(), 5);
    ASSERT_EQ(primeFactorize(35948)[0], 2);
    ASSERT_EQ(primeFactorize(35948)[1], 2);
    ASSERT_EQ(primeFactorize(35948)[2], 11);
    ASSERT_EQ(primeFactorize(35948)[3], 19);
    ASSERT_EQ(primeFactorize(35948)[4], 43);
}