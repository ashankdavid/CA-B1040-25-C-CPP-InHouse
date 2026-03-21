#include<iostream>
using namespace std;

class Animal{  // parent class
    public: 
    void eat(){
        cout << "Eating" << endl;
    }
};

class Dog : public Animal{  // child class
    public: 
    void bark(){
        cout << "Barking" << endl;
    }
};

int main(){
    Animal a;
    Dog d;

    a.eat();

    d.bark();
    d.eat();
    return 0;
}