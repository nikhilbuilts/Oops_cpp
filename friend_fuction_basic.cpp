#include <iostream>
using namespace std;

class display{
    private:
    int a=10;
    public:
    friend void show(display d);
};

void show(display d){
    cout<<"Value of a: "<<d.a;
}


int main() {
    display obj;
    show(obj);
    return 0;
}