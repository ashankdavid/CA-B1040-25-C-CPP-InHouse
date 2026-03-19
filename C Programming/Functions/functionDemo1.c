#include<stdio.h>
void greet();  // function prototyping

void main(){
    greet(); // function calling
    greet();
}

void greet(){  // function signature
    printf("Good Morning\n");
    printf("Have a nice day\n");
}
