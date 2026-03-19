#include<stdio.h>
void main(){
    char fruit;
    printf("Enter the Alphabet in lower case: ");
    scanf("%c", &fruit);

    switch(fruit){
        case 'a':
            printf("Apple");
            break;
        
        case 'o':
            printf("Orange");
            break;

        default:
            printf("Unknown Fruit!");
            break;
    }
}