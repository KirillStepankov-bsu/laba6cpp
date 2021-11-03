#include <iostream>
#include "NormalFraction.h"

int main() {
    NormalFraction fraction3(3,4);
    NormalFraction fraction1(fraction3);
    fraction1.Addition({-8,3});
    fraction1.PrintFraction();
    fraction1.Multiplication({6,5});
    fraction1.PrintFraction();
    return 0;
}
