#include<iostream>
using namespace std;

class Number{
  int num;
  public:
  Number(int n){
    num = n;
  }

  Number(const Number &obj){
    num = obj.num;
  }
  void display(){
    cout<<"Number: "<< num<<endl;
  }
};

int main(){
  Number n1(100);
  Number n2 = n1;
  n2.display();
  return 0;
}