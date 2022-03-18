#include <stdio.h>
#include <conio.h>
#include <process.h>
void main()
{
    FILE *fp;
    char ch;
    fp = fopen("INPUT.txt", "a+");
    if (fp == NULL)
    {
        printf("Can't open file");
    }
    printf("Write data and to stop press(.) \n ");
    while (ch != '.')
    {
        ch = getche();
        putc(ch, fp);
    }
    rewind(fp);
    while (!feof(fp))
    {
        ch = getc(fp);
        printf("%c", ch);
    }
    fclose(fp);
}