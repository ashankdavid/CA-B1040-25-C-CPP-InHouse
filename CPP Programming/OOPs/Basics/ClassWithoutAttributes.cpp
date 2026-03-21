#include<iostream>
using namespace std;

class Hello{  // class declaration
    public: // access specifier
    void printHello(){  // method
        cout << "Hello" << endl;
    }
    static void printHii(){
        cout << "Hii" << endl;
    }

};

int main(){
    Hello obj1; // object creation
    obj1.printHello();
    obj1.printHello();
    Hello::printHii();
    return 0;
}