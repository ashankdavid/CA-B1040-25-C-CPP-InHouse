#include<stdio.h>
#define PI 3.14
void main(){
    float area, r;
    printf("Enter the Radius: ");
    scanf("%f", &r);

    area = PI*r*r;
    printf("Area is %.2f", area);
}   