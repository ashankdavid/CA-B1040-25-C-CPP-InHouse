#include<stdio.h>
void main(){
    int i = 50;
    int * ptr = &i;
    printf("%d\n", i); // value of i 
    printf("%p\n", &i); // address of i
    printf("%p\n", ptr); // address of i
    printf("%d\n", *ptr); // value of i
}