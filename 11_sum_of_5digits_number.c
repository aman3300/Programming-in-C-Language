// This program takes a 5-digits number from the user and tells the sum of it's digits.
#include <stdio.h>
int main()
{
    int num, sum;
    printf("Enter five digit num = ");
    scanf("%d", &num);
    sum = (num % 10) + (num / 10) % 10 + (num / 100) % 10 + (num / 1000) % 10 + (num / 10000) % 10;
    printf("sum %d", sum);
    return 0;
}
