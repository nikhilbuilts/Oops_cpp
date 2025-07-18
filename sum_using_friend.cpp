#include<iostream>
using namespace std;

class Complex{
private:
  int real;
  int imag;

public:
  Complex(int r = 0, int i=0){
    real = r;
    imag = i;
  }

    
  friend Complex sum(Complex c1, Complex c2);

  void display(){
    cout<<real<<" + "<< imag<<"i"<<endl;
  }

};

Complex sum(Complex c1, Complex c2){
  Complex temp;
  temp.real =c1.real + c2.real;
  temp.imag = c1.imag + c2.imag;
  return temp;
}

int main(){
  Complex c1(8,9);
  Complex c2(4,7);

  Complex result = sum(c1,c2);
  cout<<"Sum of two complex numbers: ";
  result.display();

  return 0;
  
}
