#include<iostream>
using namespace std;
class Hero{
    public:
    static int timeToComplete;
};


int Hero::timeToComplete = 5;

int main(){
    cout<<  Hero::timeToComplete<<endl;
    Hero a;

    cout<<a.timeToComplete;
    
}