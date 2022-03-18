// This program takes the number from the user and revereses the number.
#include <stdio.h>
int main()
{
    int n, a, b, c, d, e;
    printf("this program give Reverse of five digit number \n");
    printf("Enter five digit num = ");
    scanf("%d", &n);
    a = n % 10;
    b = (n / 10) % 10;
    c = (n / 100) % 10;
    d = (n / 1000) % 10;
    e = n / 10000;
    printf("this is Reverse number of given by user = %d%d%d%d%d", a, b, c, d, e);
    return 0;
}
