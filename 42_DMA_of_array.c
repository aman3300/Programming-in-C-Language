#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int *p, n, i;
    printf("Enter the size of an array");
    scanf("%d", &n);
    p = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++)
    {
        printf("p[%d]=%d\n", i, *(p + i));
    }
}
