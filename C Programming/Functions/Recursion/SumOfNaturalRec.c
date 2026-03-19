#include<stdio.h>

int sum(int n){
    if(n==1){  // base case
        return 1;
    }else{
        return n + sum(n-1); // recursive case
    }
}

void main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("Sum is %d", sum(num));

}