#include<stdio.h>
void main(){
    ineligible:  // label for goto
    printf("You are not elegible to vote\n");
    printf("Enter the age: ");
    int age;
    scanf("%d", &age);
    if(age<18){
        goto ineligible;  // jump to label
    }else{
        printf("You can vote!");
    }
}