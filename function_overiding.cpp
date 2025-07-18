#include<iostream>
using namespace std;

class Base{
  public:
  virtual void display(){
    cout<<"from Base";
  }
};

class Derived:public Base{
  public:
  void display() override{
    cout<<"from derived";
  }
};

int main(){
  Base b;
  Derived d;

  b.display();
  d.display();

}