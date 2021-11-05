#include "NormalFraction.h"
#include <cassert>
#include <iostream>

NormalFraction::NormalFraction(NormalFraction &fraction) {
    numerator = fraction.numerator;
    denominator = fraction.denominator;
    assert(denominator != 0);
    Reduction(numerator, denominator);
}

NormalFraction::NormalFraction(int Numerator, int Denominator) {
    assert(Denominator != 0);
    numerator = Denominator < 0 ? -Numerator : Numerator;
    denominator = abs(Denominator);
    Reduction(numerator, denominator);
}

void NormalFraction::Addition(const NormalFraction &fraction2) {
    numerator = numerator * fraction2.denominator + denominator * fraction2.numerator;
    denominator = denominator * fraction2.denominator;
    Reduction(numerator, denominator);
}

void NormalFraction::Multiplication(const NormalFraction &fraction2) {
    numerator = numerator * fraction2.numerator;
    denominator = denominator * fraction2.denominator;
    Reduction(numerator, denominator);
}

void NormalFraction::Division(const NormalFraction &fraction2) {
    assert(fraction2.numerator != 0);
    numerator *= fraction2.denominator;
    denominator *= fraction2.numerator;
    numerator = denominator < 0 ? -numerator : numerator;
    denominator = abs(denominator);
    Reduction(numerator, denominator);
}

void NormalFraction::Reduction(int &Numerator, int &Denominator) {
    int factor = GreatestCommonFactor(abs(Numerator), abs(Denominator));
    Numerator /= factor;
    Denominator /= factor;
}

int NormalFraction::GreatestCommonFactor(int Numerator, int Denominator) {
    if (Numerator % Denominator == 0)
        return Denominator;
    if (Denominator % Numerator == 0)
        return Numerator;
    if (Numerator > Denominator)
        return GreatestCommonFactor(Numerator % Denominator, Denominator);
    return GreatestCommonFactor(Numerator, Denominator % Numerator);
}

void NormalFraction::PrintFraction() const {
    if (numerator == 0) {
        std::cout << 0 << '\n';
        return;
    }
    if (denominator == 1) {
        std::cout << numerator << std::endl;
        return;
    }
    if (abs(numerator) > abs(denominator)) {
        int r = abs(numerator) / abs(denominator);
        if (numerator < 0)
            std::cout << '-' << r << " " << abs(numerator) - abs(denominator) * r << '/' << abs(denominator) << '\n';
        else
            std::cout << r << " " << abs(numerator) - abs(denominator) * r << '/' << abs(denominator) << '\n';
        return;
    }
    std::cout << numerator << '/' << denominator << '\n';
}

