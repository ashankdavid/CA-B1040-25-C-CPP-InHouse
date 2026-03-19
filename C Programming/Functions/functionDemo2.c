#include<stdio.h>
int add(int, int); // prototyping
int subtract(int, int);

void main(){
    int num1, num2;
    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    int sum = add(num2, num1); // call
    printf("The Sum is %d\n", sum);

    printf("The Difference is %d\n", subtract(num1, num2));
}

int add(int a, int b){ // signature
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}