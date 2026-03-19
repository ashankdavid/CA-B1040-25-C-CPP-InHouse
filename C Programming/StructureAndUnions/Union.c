#include<stdio.h>
#include<string.h>

union Student{
    char name[10];
    int rollNo;
};

void main(){
    union Student s1;
    union Student s2;

    // Initialized the values of S1
    s1.rollNo = 123;
    printf("Student 1 rollNo is %d\n", s1.rollNo);
    strcpy(s1.name, "Pavan");
    printf("Student 1 is %s\n", s1.name);

    // Initialized the values of S2
    s2.rollNo = 345;
    strcpy(s2.name, "Ashank");

    // printing the values of s2
    printf("Student 2 is %s\n", s2.name);
    printf("Student 2 rollNo is %d\n", s2.rollNo);
}