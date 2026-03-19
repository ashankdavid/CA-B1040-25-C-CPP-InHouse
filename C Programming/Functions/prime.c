#include <stdio.h>

void checkPrime(int n)
{
    int i, isPrime = 1;

    if (n < 2)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1)
        printf("Prime Number");
    else
        printf("Not a Prime Number");
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    checkPrime(num);

    return 0;
}
