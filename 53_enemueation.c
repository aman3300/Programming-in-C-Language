#include <ctype.h>
#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    int f;
    enum ctype
    {
        letter,
        digit,
        other
    };
    printf("\n Enter Any character ");
    ch = getch();
    f = isalpha(ch);
    if (f != 0)
    {
        printf("%c is type %d symbol ", ch, letter);
    }
    else
    {
        f = isdigit(ch);
        if (f != 0)
        {
            printf("\n %C is type %d symbol", ch, digit);
        }
        else
        {
            printf("\n %c is type %d symbol", ch, other);
        }
    }
}