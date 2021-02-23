#ifndef Binomial_h
#define Binomial_h

class Binomial{
  private:
  float coefficient[3]{0.0,1.0,1.0};
  int power[3]{0,1,1};

  public:
  Binomial();

  Binomial(float );

  Binomial(float a, int x);

  Binomial(float a, int x, float b);

  Binomial(float a, int x, float b, int y);

  float GetCoefficient(float m);

  int GetPower(int c);

  int SetPower(int d, int e);

  int Add(Binomial o);

  void Multiply(float h);

  void Multiply(float h, int k);

  };

  #endif
