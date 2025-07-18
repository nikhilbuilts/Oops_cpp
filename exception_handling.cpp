#include<iostream>
using namespace std;


int main(){
  int a,b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;

  try{
    if(b==0){
      throw "Divison by zero is not aloowed";
    }
    int result = a / b;
    cout<<"Result: "<<result<<endl;
  }
  catch(const char* msg){
    cout<<"Exception: "<<msg<<endl;
  }
  
}