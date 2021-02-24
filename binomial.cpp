#include "binomial.h"

binomial::binomial(float coef1=1.0, float coef2=1.0, int expo1=1, int expo2= 1){
    coefficient1 = coef1;
    coefficient2 = coef2;
    if (expo1 < 1)
        exponent1 = 1;
    else
        exponent1 = p1;
    if (expo2 < 1)
        expponent2 = 1;
    else
        exponent2 = p2;
}
float Binomial::GetCoefficient(int index)
{
    if (index == 1)
        return coeffiecient1;
    else if (index == 2)
        return coefficient2;
    else
        return -1;
}
int Binomial::GetPower(int index)
{
    if (index == 1)
        return exponent1;
    else if (index == 2)
        return exponent2;
    else
        return -1;
}
int Binomial::SetPower(int index, int value)
{
    if (index == 1)
    {
        if (value < 1)
            exponent1 = 1;
        else
            exponent1 = value;
        return 0;
    }
    else if (index == 2)
    {
        if (value < 1)
            exponent2 = 1;
        else
            exponent2 = value;
        return 0;
    }
    else
    {
        return -1;
    }
}
int Binomial::Add(Binomial &B)
{
    if (expo1 == B.expo1 && expo2 == B.expo2)
    {
        coefficient1 += B.coefficient1;
        coefficient2 += B.coefficient2;
        return 0;
    }
    else
    {
        return -1;
    }
}
void Binomial::Multiply(float num)
{
    coefficient1 *= num;
    coefficient2 *= num;
}
void Binomial::Multiply(float monoCoeff, int monoPower)
{
    coefficient1 *= monoCoeff;
    exponent1 += monoPower;
    coefficient2 *= monoCoeff;
    exponent2 += monoPower;
}

