#include<stdio.h>
void main(){
    int size = 5;
    for(int rows=1; rows<=size; rows++){
        for(int space = 1; space<=size-rows; space++){
            printf(" ");
        }
        for(int star = 1; star<=2*rows-1; star++){
            printf("*");
        }
        printf("\n");
    }
}