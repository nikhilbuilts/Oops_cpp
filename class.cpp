#include<iostream>
using namespace std;

class hero{
    public:
    char level;
    int health;

};

int main(){
    hero ramesh;
    ramesh.level = 'A';
    ramesh.health = 70;

    cout<<ramesh.health;
    cout<<ramesh.level;
    return 0;
}