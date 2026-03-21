#include<iostream>
using namespace std;

class Animal{  // Grandparent class
    public: 
    void eat(){
        cout << "Eating" << endl;
    }
};

class Dog : public Animal{  // Parent/child class
    public: 
    void bark(){
        cout << "Barking" << endl;
    }
};

class BabyDog : public Dog{ //Child Class
    public:
    void cry(){
        cout << "Crying..." << endl;
    }
};

int main(){
    Animal a;
    Dog d;
    BabyDog bd;

    a.eat();

    d.bark();
    d.eat();

    bd.bark();
    bd.cry();
    bd.eat();
    return 0;
}