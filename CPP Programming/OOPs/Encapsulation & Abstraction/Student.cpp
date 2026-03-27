#include<iostream>
using namespace std;

class Student{
    private: 
    string name;
    int usn;
    
    public:
    Student(string n, int u){
        name = n;
        usn = u;
    }
    
    //getter() ---> name (private)
    string getName(){
        return name;
    }

    // setter() ---> name (Priavte)
    void setName(string name){
        this->name = name;
    }

    void printDetails(){
        cout << "Student Name " << name << endl;
        cout << "Student USN " << usn << endl;
    }
};

int main(){
    Student s1("Ashank", 123);
    s1.printDetails();
    cout << s1.getName() << endl;
    s1.setName("Pavan");
    s1.printDetails();

    return 0;
}