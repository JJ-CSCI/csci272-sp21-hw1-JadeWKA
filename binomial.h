#ifndef binomial.h
#define binomial.h

class binomial{
  private:
  float coefficient1;
  float coefficient2;
  int exponent1;
  int exponent2;

  public:
  binomial(float coef1=1.0, float coef2=1.0, int expo1=1, int expo2= 1){
    float GetCoefficient(int index);
    int GetPower(int index);
    int SerPower(int index, int value);
    int Add(Binomial &B);
    void Multiply(float num);
    void Multiply(float monoCoeff,int monoPower);
};

#endif