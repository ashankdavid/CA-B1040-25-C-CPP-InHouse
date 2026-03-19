#include<stdio.h>
void main(){
    int i=50;
    printf("%p\n", &i); // address of i
    printf("%d\n", i); // value of i

    // pointer declaration
    int *ptr; // wild pointer
    ptr = &i;
    printf("%p\n", &ptr); // address of ptr
    printf("%p\n", ptr); // value of ptr

    int *ptr1; // wild pointer
    ptr1 = NULL; // NULL pointer
}