#include<stdio.h>
int reverse (int);

void main()
{

    int num1;
    printf("enter the value of num1:");
    scanf("%d",&num1);

     int rev = reverse (num1);//call
    
}

int reverse (int a )//signature
{
   int reverse=0,remainder,original=0;
    original = a;
        for (;a!=0;a/=10)
            {
                remainder=a %10;
                reverse=reverse*10+remainder;
            }
           printf("reversed number is %d\n",reverse);
        
    }