#include<stdio.h>
void main(){
    int num = 20;
    char ch = 'b'; // a is 98 (ASCII)
    int res = num + ch; // Here Implicit Typecasting is being done!
    printf("%d", res);
}