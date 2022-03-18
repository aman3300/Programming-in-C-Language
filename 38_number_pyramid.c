#include <stdio.h>

int main()
{
    int i = 5, j, n;

    for (int n = 1; n <= i; n++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
