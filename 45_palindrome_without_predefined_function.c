#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
    char s[100];
    int i, n, c = 0;
    printf("Enter the string");
    gets(s);
    n = strlen(s);
    for (i = 0; i < n / 2; i++)
    {
        if (s[i] == s[n - i - 1])
            c++;
    }
    if (c == i)
        printf("String is Pallindrome");
    else
        printf("String is not Palindrome");
    getch();
}
