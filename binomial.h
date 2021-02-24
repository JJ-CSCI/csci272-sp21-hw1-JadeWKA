#ifndef binomial_h
#define binomial_h

class Binomial{
  private:
  float coefficient1;
  float coefficient2;
  int exponent1;
  int exponent2;

  public:
  Binomial(float coef1=1.0,  int expo1=1, float coef2=1.0, int expo2=1);
    float GetCoefficient(int index);
    int GetPower(int index);
    int SetPower(int index, int value);
    int Add(Binomial B);
    void Multiply(float num);
    void Multiply(float monoCoeff,int monoPower);
};

#endif