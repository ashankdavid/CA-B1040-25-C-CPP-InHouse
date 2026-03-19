#include<stdio.h>
void main(){
    int num1, num2;
    printf("Enter a Num1: ");
    scanf("%d", &num1);
    printf("Enter a Num2: ");
    scanf("%d", &num2);
    if(num1>num2){
        printf("Num1 is Greater!");
    }else if(num2 > num1){
        printf("Num2 is Greater!");
    }else{
        printf("Num1 and Num2 are equal");
    }
}