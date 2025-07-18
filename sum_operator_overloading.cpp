#include<iostream>
using namespace std;

class Complex{
  int real, imag;

  public:
  Complex(int r = 0, int i = 0){
    real = r;
    imag = i;
  }
  Complex operator+(Complex &c){
    return Complex(real+c.real,imag + c.imag);
  }
  void display(){
    cout<<real<<"+"<<imag<<"i"<<endl;
  }
};

int main(){
  Complex c1(3,7), c2(6,4);
  Complex c3 = c1 + c2;
  c3.display();
  return 0;
}