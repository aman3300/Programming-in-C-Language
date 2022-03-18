// This program is to pass an array element to a function.
#include <stdio.h>
void display(int);
int main()
{
    int i;
    int marks[] = {66, 77, 88, 99, 80};
    for (i = 0; i < 5; i++)
    {
        display(marks[i]);
    }
    return 0;
}
void display(int m)
{
    printf("%d \n ", m);
}
