// This is  a menu driven program to perform following Operations:
// 1.print Armstrong number upto N
// 2.Display your Prime number i to N
// 3.Reverse of an Integers

#include <stdio.h>
int main()
{
    int num, i, choice, reverse = 0, rem, sum, max;
    printf("choice 1 for Armstrong number \n ");
    printf("choice 2 for check Prime or not \n ");
    printf("choice 3 for reverse your integer(num) \n ");
    printf("Enter Your choice \n");
    scanf("%d", &choice);
    printf("Enter your num \n");
    scanf("%d", &num);
    switch (choice)
    {
    case 1:
        for (i = 1; i < 50000; i++)
        {
            num = i;
            sum = 0;
            while (num)
            {
                rem = num % 10;
                sum = sum + (rem * rem * rem);
                num = num / 10;
            }
            if (!(i == num))
            {
                printf(" Entered number not a Amstrong number ");
                break;
            }
            else if (i == sum)
            {
                printf("Entered is a Amstrong number \n");
            }
        }
        break;
    case 2:
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                printf("NOT A Prime number ");
                break;
            }
        }
        if (num == i)
        {
            printf("Prime number ");
        }
        break;
    case 3:
        printf("reverse of integer ");
        while (num != 0)
        {
            rem = num % 10;
            reverse = reverse * 10 + rem;
            num /= 10; //(num=num/10)
        }
        printf("Reverse num = %d", reverse);
        break;
    default:
        break;
    }
    return 0;
}