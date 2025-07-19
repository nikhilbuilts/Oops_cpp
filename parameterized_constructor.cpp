// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class sum{
    public:
    template <typename T>
    sum(T a, T b){
        cout<<"Sum of a and b is: "<<a+b<<"\n";
    }
    
    ~sum(){
        cout<<"Destructor called";
    }
};



int main() {
    sum obj(3.6f,7.8f);
    return 0;
}