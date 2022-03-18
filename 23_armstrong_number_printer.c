#include <stdio.h>

int main()
{
    int a, i, x, y, z, m, statement = 0;

    for (int a = 0; a <= 500; a++)
    {
        x = a % 10; //this is ones digit
        y = a / 10;
        z = y % 10;  //this is tens digit
        m = a / 100; //this is hundredth digit
        int arm = (x * x * x) + (z * z * z) + (m * m * m);
        if (arm == a)
        {
            printf("%d\n", a);
        }
    }
    return 0;
}