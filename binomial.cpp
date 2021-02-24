#include "binomial.h"

Binomial::Binomial(float coef1,  int expo1, float coef2, int expo2){
    if ((expo1 < 1)&&(expo2 < 1)){
        exponent1 = 1;
        exponent2 = 1;}
    else if((expo1<1)&&(expo2>=1)){
      exponent1 = 1;
      exponent2 = expo2;}
    else if((expo1>=1)&&(expo2<1)){
      exponent1 = expo1;
      exponent2 = 1;}
    else if((expo1>=1)&&(expo2>=1)){
      exponent1 = expo1;
      exponent2 = expo2;}
}
float Binomial::GetCoefficient(int index)
{
    if (index == 1)
        return coefficient1;
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
    if (exponent1 == B.exponent1 && exponent2 == B.exponent1)
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

