#include<stdio.h>
void main(){
    int arr[5] = {1,2,3,4,5};
    printf("%d\n", arr[0]);
    printf("%d\n", arr[2]);

    for(int i=0; i<5; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    int arrpavan[5];
    printf("Enter 5 numbers one by one: ");
    for(int i=0; i<5; i++){
        scanf("%d", &arrpavan[i]);
    }

    for(int i=0; i<5; i++){
        printf("%d", arrpavan[i]);
    }
}