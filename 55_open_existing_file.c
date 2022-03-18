#include <stdio.h>
#include <conio.h>
#include <process.h>
void main()
{
    FILE *fptr;
    char ch;
    printf("content of File before Appending \n ");
    fptr = fopen("hello1.dat", "r");
    while (!feof(fptr))
    {
        ch = getc(fptr);
    }
    printf("%c", ch);
    fclose(fptr);
    // we go to Append content of file
    printf("you want to Stop file writing press (.) \n");
    fptr = fopen("hello1.dat", "a");
    while (ch != '.')
    {
        ch = getche();  // getche use to take character from user
        putc(ch, fptr); // puts use to dump content in file
    }
    fclose(fptr);
    getch();
}
