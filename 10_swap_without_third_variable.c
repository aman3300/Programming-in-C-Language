// This program swaps the value of two numbers without using a third variable.
#include <stdio.h>

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of first number is %d\n", a);
    printf("The value of second number is %d\n", b);

    return 0;
}