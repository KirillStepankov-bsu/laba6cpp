#ifndef MAIN_NORMALFRACTION_H
#define MAIN_NORMALFRACTION_H


class NormalFraction {
public:
    NormalFraction(NormalFraction &fraction);

    NormalFraction(int Numerator, int Denominator);

    int GetNumerator() const { return numerator; }

    int GetDenominator() const { return denominator; }

    void Addition(const NormalFraction &fraction2);

    void Multiplication(const NormalFraction &fraction2);

    void PrintFraction() const;

    void Division(const NormalFraction &fraction2);

private:
    void Reduction(int &Numerator, int &Denominator);

    int GreatestCommonFactor(int Numerator, int Denominator);

    int numerator;
    int denominator;
};


#endif //MAIN_NORMALFRACTION_H