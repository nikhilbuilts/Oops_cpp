#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b){
  return a + b;
}

int main(){
  cout<<add(3,5)<<endl;
  cout<<add(2.3f,7.8f)<<endl;
  cout<<add(8.5,3.8)<<endl;

 return 0;
}