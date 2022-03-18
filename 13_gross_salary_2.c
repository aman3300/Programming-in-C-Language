#include <stdio.h>
int main()
{
    int bs, HRA, DA, gross_salary;
    printf("Enter your basic salary ");
    scanf("%d", &bs);
    if (bs < 1500)
    {
        HRA = (bs * 10) / 100;
        DA = (bs * 90) / 100;
    }
    else if (bs >= 1500)
    {
        HRA = 500;
        DA = (bs * 98) / 100;
    }
    gross_salary = bs + HRA + DA;
    printf("This is our gross salary is = %d ", gross_salary);
    return 0;
}