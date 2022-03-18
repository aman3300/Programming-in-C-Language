#include <stdio.h>
int rec(int a);
int main()
{
    int a, fact;
    printf("Enter any number\n");
    scanf("%d", &a);
    fact = rec(a);
    printf("The factorial of %d is %d", a, fact);
    return 0;
}
int rec(int a)
{
    int f;
    if (a == 1)
    {
        return 1;
    }
    else
    {
        f = a * rec(a - 1);
    }
}