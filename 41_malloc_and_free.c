#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    char *ch;
    int *p;
    float *f;
    ch = (char *)malloc(sizeof(char));
    p = (int *)malloc(sizeof(int));
    f = (float *)malloc(sizeof(float));
    printf("Enter a character");
    *ch = getchar();
    printf("Enter an integer");
    scanf("%d", p);
    printf("Enter a float");
    scanf("%f", f);
    printf("u entered \n%c%d%f,*ch,*p,*f");
    free(ch);
    free(p);
    free(f);
}