#include "NormalFraction.h"
#include "gtest/gtest.h"

TEST(FracConstrust, СancellableFrac) {
    NormalFraction fraction1(8, 20);
    ASSERT_EQ(fraction1.GetNumerator(), 2);
    ASSERT_EQ(fraction1.GetDenominator(), 5);
}

TEST(FracConstrust, NotСancellableFrac) {
    NormalFraction fraction1(9, 20);
    ASSERT_EQ(fraction1.GetNumerator(), 9);
    ASSERT_EQ(fraction1.GetDenominator(), 20);
}

TEST(FracConstrust, MinusNumerator) {
    NormalFraction fraction1(-3, 8);
    ASSERT_EQ(fraction1.GetNumerator(), -3);
    ASSERT_EQ(fraction1.GetDenominator(), 8);
}

TEST(FracConstrust, MinusDenominator) {
    NormalFraction fraction1(8, -11);
    ASSERT_EQ(fraction1.GetNumerator(), -8);
    ASSERT_EQ(fraction1.GetDenominator(), 11);
}

TEST(FracConstrust, MinusDenominatorAndNumerator) {
    NormalFraction fraction1(-3, -4);
    ASSERT_EQ(fraction1.GetNumerator(), 3);
    ASSERT_EQ(fraction1.GetDenominator(), 4);
}


TEST(FracCopyConstrust, СancellableFrac) {
    NormalFraction fraction1(8, 20);
    NormalFraction fraction2(fraction1);
    ASSERT_EQ(fraction2.GetNumerator(), 2);
    ASSERT_EQ(fraction2.GetDenominator(), 5);
}

TEST(FracCopyConstrust, NotСancellableFrac) {
    NormalFraction fraction1(9, 20);
    NormalFraction fraction2(fraction1);
    ASSERT_EQ(fraction2.GetNumerator(), 9);
    ASSERT_EQ(fraction2.GetDenominator(), 20);
}

TEST(FracCopyConstrust, MinusNumerator) {
    NormalFraction fraction1(-3, 8);
    NormalFraction fraction2(fraction1);
    ASSERT_EQ(fraction2.GetNumerator(), -3);
    ASSERT_EQ(fraction2.GetDenominator(), 8);
}

TEST(FracCopyConstrust, MinusDenominator) {
    NormalFraction fraction1(8, -11);
    NormalFraction fraction2(fraction1);
    ASSERT_EQ(fraction2.GetNumerator(), -8);
    ASSERT_EQ(fraction2.GetDenominator(), 11);
}

TEST(FracCopyConstrust, MinusDenominatorAndNumerator) {
    NormalFraction fraction1(-3, -4);
    NormalFraction fraction2(fraction1);
    ASSERT_EQ(fraction2.GetNumerator(), 3);
    ASSERT_EQ(fraction2.GetDenominator(), 4);
}


TEST(FracAddition, DenominatorEqOne) {
    NormalFraction fraction1(3, 4);
    NormalFraction fraction2(4, 1);
    fraction1.Addition(fraction2);
    ASSERT_EQ(fraction1.GetNumerator(), 19);
    ASSERT_EQ(fraction1.GetDenominator(), 4);
}

TEST(FracAddition, DenominatorNotEqOne) {
    NormalFraction fraction1(3, 4);
    NormalFraction fraction2(4, 9);
    fraction1.Addition(fraction2);
    ASSERT_EQ(fraction1.GetNumerator(), 43);
    ASSERT_EQ(fraction1.GetDenominator(), 36);
}

TEST(FracAddition, AdditionNull) {
    NormalFraction fraction1(3, 4);
    NormalFraction fraction2(0, 1);
    fraction1.Addition(fraction2);
    ASSERT_EQ(fraction1.GetNumerator(), 3);
    ASSERT_EQ(fraction1.GetDenominator(), 4);
}

TEST(FracAddition, Subtraction) {
    NormalFraction fraction1(3, 4);
    NormalFraction fraction2(-3, 4);
    fraction1.Addition(fraction2);
    ASSERT_EQ(fraction1.GetNumerator(), 0);
    ASSERT_EQ(fraction1.GetDenominator(), 1);

    NormalFraction fraction11(3, 4);
    NormalFraction fraction22(-7, 9);
    fraction11.Addition(fraction22);
    ASSERT_EQ(fraction11.GetNumerator(), -1);
    ASSERT_EQ(fraction11.GetDenominator(), 36);
}

TEST(FracMultiplication, NullNumerator) {
    NormalFraction fraction1(3, 4);
    NormalFraction fraction2(0, 1);
    fraction1.Multiplication(fraction2);
    ASSERT_EQ(fraction1.GetNumerator(), 0);
    ASSERT_EQ(fraction1.GetDenominator(), 1);
}

TEST(FracMultiplication, Multi) {
    NormalFraction fraction1(3, 4);
    NormalFraction fraction2(4, 3);
    fraction1.Multiplication(fraction2);
    ASSERT_EQ(fraction1.GetNumerator(), 1);
    ASSERT_EQ(fraction1.GetDenominator(), 1);

    NormalFraction fraction11(3, 4);
    NormalFraction fraction22(8, 3);
    fraction11.Multiplication(fraction22);
    ASSERT_EQ(fraction11.GetNumerator(), 2);
    ASSERT_EQ(fraction11.GetDenominator(), 1);

    NormalFraction fraction3(3, 4);
    NormalFraction fraction4(7, 2);
    fraction3.Multiplication(fraction4);
    ASSERT_EQ(fraction3.GetNumerator(), 21);
    ASSERT_EQ(fraction3.GetDenominator(), 8);
}

TEST(FracDivision, TheSame){
    NormalFraction fraction1(3,4);
    NormalFraction fraction2(fraction1);
    fraction1.Division(fraction2);
    ASSERT_EQ(fraction1.GetNumerator(), 1);
    ASSERT_EQ(fraction1.GetDenominator(), 1);
}

TEST(FracDivision, Div){
    NormalFraction fraction1(3,4);
    NormalFraction fraction2(8,7);
    fraction1.Division(fraction2);
    ASSERT_EQ(fraction1.GetNumerator(), 21);
    ASSERT_EQ(fraction1.GetDenominator(), 32);
}



