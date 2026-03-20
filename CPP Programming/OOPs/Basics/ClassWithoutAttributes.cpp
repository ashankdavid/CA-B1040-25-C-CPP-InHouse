#include<iostream>
using namespace std;

class Hello{  // class declaration
    public: // access specifier
    void printHello(){  // method
        cout << "Hello" << endl;
    }

};

int main(){
    Hello obj1; // object creation
    obj1.printHello();
    obj1.printHello();
    return 0;
}