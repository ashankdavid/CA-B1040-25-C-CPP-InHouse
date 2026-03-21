#include<iostream>
using namespace std;

class Mom{
    public:
    void cook(){
        cout << "Cooking Indian" << endl;
    }
};

class Dad{
    public:
    void cook(){
        cout << "Cooking Chinese" << endl;
    }
};

class Child : public Mom, public Dad{
    public:
    void study(){
        cout << "Studying.." << endl;
    }
};

int main(){
    Mom m;
    Dad d;
    Child c;

    m.cook();

    d.cook();

    c.study();
    c.Mom::cook();
    c.Dad::cook();
    return 0;
}