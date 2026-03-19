#include<stdio.h>
void main(){
    int i = 50;
    int *ptr = &i;
    int **dptr = &ptr;
    int ***ddptr = &dptr;
    int ****dddptr = &ddptr;

    printf("%d", ****dddptr);
}