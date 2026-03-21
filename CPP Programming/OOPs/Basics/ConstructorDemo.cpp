#include<iostream>
using namespace std;

class Demo{
    public:
    // constructor
    Demo(){
        cout << "I'm a Constructor!" << endl;
    }

    // desctructor
    ~Demo(){
        cout << "I'm a Destructor!" << endl;
    }
};

int main(){
    Demo obj1;
    Demo obj2;
    Demo obj3;
    Demo obj4;
    return 0;
}