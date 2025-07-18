#include<iostream>
using namespace std;

int add (int a, int b){
  return a + b;
}

float add (float a, float b){
  return a + b;
}

int add (int a, int b, int c){
  return a + b + c;
}

int main(){
  cout<<"Sum of 2 integers: "<<add(5,2)<<endl;
  cout<<"Sum of 2 float: "<<add(3.5f,2.6f)<<endl;
  cout<<"Sum of 3 integers: "<<add(5,2,8)<<endl;

}


