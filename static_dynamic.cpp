#include<iostream>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;

    void print(){
        cout<< level << endl;
    }
    
    
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

};

int main(){
    //Static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout<< "level is "<< a.level << endl;
    cout<< "Health is "<< a.getHealth() << endl;

    //Dynamically
    Hero *b = new Hero;
    b->setHealth(80);
    b->setLevel('A');
    cout<<"level is "<< (*b).level << endl;
    cout<< "Healt is "<< (*b).getHealth()<< endl;


    cout<<"level is "<< b->level<< endl;
    cout<< "Health is "<< b->getHealth()<< endl;


    return 0;
}