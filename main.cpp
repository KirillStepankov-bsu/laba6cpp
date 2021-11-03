#include <iostream>
#include "NormalFraction.h"

int main() {
    NormalFraction fraction3(3,4);
    NormalFraction fraction1(fraction3);
    fraction1.Addition({-2,3});
    fraction1.PrintFraction();
    fraction1.Multiplication({4,5});
    fraction1.PrintFraction();
    return 0;
}
