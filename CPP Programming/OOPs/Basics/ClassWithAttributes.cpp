#include <iostream>
using namespace std;

class Student{
    public:
    // instance variables
    string name;
    int rollNo;

    // class variable
    static string collage;

    Student(string n, int r){ // constructor
        name = n;
        rollNo = r;
        collage = "RNSIT";
    }

    void printDetails(){
        cout << "Student name is " << name << endl;
        cout << "Student RollNo is " << rollNo << endl;
        cout << "Student Collage is " << collage << endl;
    }

};

int main(){
    Student s1("Pavan", 123);
    Student s2("Ashank", 345);
    s1.printDetails();
    s2.printDetails();
    return 0;
}

/*
above in the obvject creation part
Student s1()
above these () with s1 is the sign of constructor 
getting called!
*/