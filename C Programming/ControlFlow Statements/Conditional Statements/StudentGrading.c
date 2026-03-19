#include<stdio.h>
void main ()
{
float m1,m2,m3,m4,m5,percentage,SUM;
printf ("enter the value of m1:");
scanf("%f",&m1);
printf ("enter the value of m2:");
scanf("%f",&m2);
printf ("enter the value of m3:");
scanf("%f",&m3);
printf ("enter the value of m4:");
scanf("%f",&m4);
printf ("enter the value of m5:");
scanf("%f",&m5);
SUM = m1+m2+m3+m4+m5;
percentage = SUM/500*100;

printf (" percentage is %.2f\n ",percentage);

if (percentage >=75)
{
printf ("grade is A ");
}

else if (percentage < 75)
{
printf ("grade is B ");

}

else if (percentage <=50)
{
printf ("grade is C ");

}
else 
{
printf ("grade is fail ");

}
}