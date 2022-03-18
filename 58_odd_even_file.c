#include <stdio.h>
#include <conio.h>
#include <process.h>
void main()
{
    FILE *f1, *f2, *f3;
    int number, i;
    printf("Contents of DATA file\n\n");
    f1 = fopen("Data.txt", "w");
    for (i = 1; i <= 30; i++)
    {
        scanf("%d", &number);
        if (number == -1) //-1 use for break loop; for exit
            break;
        putw(number, f1);
    }
    fclose(f1);
    f1 = fopen("Data.txt", "r");
    f2 = fopen("odd.txt", "w");
    f3 = fopen("even.txt", "w");
    while ((number = getw(f1)) != EOF)
    {
        if (number % 2 == 0)
            putw(number, f3); // Write to EVEN file
        else
            putw(number, f2); // Write to ODD file
    }
    fclose(f1);
    fclose(f2);
    fclose(f3); // we go to read file on console
    f2 = fopen("odd.txt", "r");
    f3 = fopen("even.txt", "r");
    printf("\n\nContents of ODD file\n\n");
    while ((number = getw(f2)) != EOF)
        printf("%4d", number); //%4d use for give four Space then number
    printf("\n\nContents of Even file\n\n");
    while ((number = getw(f3)) != EOF)
        printf("%4d", number);
    fclose(f2);
    fclose(f3);
}
