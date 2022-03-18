// this is a menu driven program to calculate the following:-
// 1. Factorial of a given number.
// 2. Prime number or not.
// 3. Odd or even.
// 4. Exit

#include <stdio.h>

int main()
{
    int a, f;
    int x = 0, n, factorial = 1;
    int i = 2, prime = 1;
    printf("choose which of the following operation you want to perform\n");
    printf("1. factorial of a number\n");
    printf("2. Prime number or not\n");
    printf("3. Odd or even\n");
    printf("4. Exit\n");
    scanf("%d", &f);

    switch (f)
    {
    case 1:
        printf("enter the number\n");
        scanf("%d", &n);
        for (x = 1; x <= n; x++)
        {
            factorial *= x;
        }
        printf("the value of factorial %d is %d\n", n, factorial);
        break;

    case 2:

        printf("enter the number\n");
        scanf("%d", &a);

        for (i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 0)
        {
            printf("this number is not a prime number\n");
        }
        else
        {
            printf("this is a prime number\n");
        }
        break;
    case 3:
        printf("enter the number\n");
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            printf("this is an even number\n");
        }
        else
        {
            printf("this is an odd number\n");
        }
    }
    return 0;
}
