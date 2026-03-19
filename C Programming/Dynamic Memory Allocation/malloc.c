#include<stdio.h>
#include<stdlib.h>
void main(){
    int i = 50; // stack side allocated
    int *ptr = &i; // stack side allocated
    // but right now ptr is pointing towards i

    ptr = (int*) malloc(5*sizeof(int));
    // now in this case now ptr is disconnected from i and now is pointing towards a newly allocated space in the heap side of the RAM, with the help of malloc!


    for(int i=0; i<5; i++){
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<5; i++){
        printf("%d", ptr[i]);
    }

    free(ptr);
}