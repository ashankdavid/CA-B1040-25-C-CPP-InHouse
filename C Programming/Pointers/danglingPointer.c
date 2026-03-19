#include<stdio.h>
void main(){
    int i = 50;
    int *ptr = &i;
    ptr = (int*) malloc(20);
    free(ptr); // dangling pointer --> ptr
    ptr = NULL;
}