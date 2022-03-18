#include <stdio.h>
#include <conio.h>
#define ind 1
#define usa 2
#define uk 3
#define country uk
void main()
{
    clrscr();
#if country == ind
    printf("Selectd country code is: %d\n", country);
#elif country == usa
    printf("Selected country is: %d\n", country);
#else
    printf("Selected country is: %d", country);
#endif
    getch();
}
