#include <stdio.h>

int main()
{
    int a, b, n;
    float x, y;
jump:
    printf("What operation do you want to perform\n");
    printf("1.Press 1 for Addition\n");
    printf("2.Press 2 for Subtraction\n");
    printf("3.Press 3 for Multiplication\n");
    printf("4.Press 4 for Division\n");
    printf("5.Press 5 for Average\n");
    printf("6.Press 6 for Percentage\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter Two numbers\n");
        scanf("%d %d", &a, &b);
        printf("Sum of these two numbers is %d\n", a + b);
        goto jump;

    case 2:
        printf("Enter Two numbers\n");
        scanf("%d %d", &a, &b);
        printf("Difference of these two numbers is %d\n", a - b);
        goto jump;

    case 3:
        printf("Enter Two numbers\n");
        scanf("%d %d", &a, &b);
        printf("Multiplication of these two numbers is %d\n", a * b);
        goto jump;

    case 4:
        printf("Enter Two numbers\n");
        scanf("%f %f", &x, &y);
        printf("Division of these two numbers is %f\n", x / y);
        goto jump;

    case 5:
        printf("enter two numbers\n");
        scanf("%f %f", &x, &y);
        printf("average of these two numbers is %f\n", (x + y) / 2);
        goto jump;

    case 6:
        printf("Enter the number of percentage you want to calculate\n");
        scanf("%f", &x);
        printf("Enter the number out of which you want to calculate the percentage\n");
        scanf("%f", &y);
        printf("The value is %f\n", (x * y) / 100);
        goto jump;
    }

    return 0;
}