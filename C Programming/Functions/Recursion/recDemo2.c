#include<stdio.h>

void name(int n){
    printf("Pavan");
    n++;
    if(n<10){ // base case
        name(n);  // recursive case
    }
}

void main(){
    name(5);
}