#include<stdio.h>
#include<string.h>


struct Student{
    char name[10];
    int rollNo;
};

void main(){
    struct Student s1;
    struct Student s2;

    // Initialized the values of S1
    strcpy(s1.name, "Pavan");
    s1.rollNo = 123;

    // Initialized the values of S2
    strcpy(s2.name, "Ashank");
    s2.rollNo = 345;

    // printing the values of s1
    printf("Student 1 is %s\n", s1.name);
    printf("Student 1 rollNo is %d\n", s1.rollNo);

    // printing the values of s2
    printf("Student 2 is %s\n", s2.name);
    printf("Student 2 rollNo is %d\n", s2.rollNo);
}