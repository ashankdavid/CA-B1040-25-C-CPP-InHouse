#include<stdio.h>
void main(){
    int rows = 5;
    // Upper Part
    for(int i=1; i<=rows; i++){
        for(int space = 1; space<=rows-i; space++){
            printf(" ");
        }
        for(int star = 1; star<=2*i-1; star++){
            printf("*");
        }
        printf("\n");
    }
    
    //Lower Part
    for(int i=rows-1; i>0; i--){
        for(int space = 1; space<=rows-i; space++){
            printf(" ");
        }
        for(int star = 1; star<=2*i-1; star++){
            printf("*");
        }
        printf("\n");
    }
}