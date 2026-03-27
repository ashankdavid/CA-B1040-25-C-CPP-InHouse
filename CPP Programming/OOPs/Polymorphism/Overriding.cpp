// Run Time Polymorphism Example!
#include<iostream>
using namespace std;

class Mom{
    public:
    void cook(){
        cout << "Indian" << endl;
    }
};

class Daughter : public Mom{
    public:
    void cook(){
        cout << "Chinese" << endl;
    }
};

int main(){
    Mom m;
    Daughter d;

    d.cook();
    m.cook();

    return 0;
}