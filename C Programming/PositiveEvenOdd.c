#include<stdio.h>
void main(){
    int num;
    printf("Enter a Num: ");
    scanf("%d", num);

    if(num>0){
        if(num%2==0){
            printf("Even");
        }else{
            printf("ODD");
        }
    }else{
        printf("Negative");
    }
}