#include<stdio.h>
void swap(int **a, int **b){
    int temp = **a;
    **a = **b;
    **b = temp;
}

void main(){
    int num1 = 10;
    int num2 = 20;
    int *a = &num1;
    int *b = &num2;
    printf("Before Swap a=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After Swap a=%d, b=%d\n", a, b);
}