#include <stdio.h>
#include <conio.h>
void fun(int a)
{
    printf("value of a is %d\n", a);
}
int main()
{
    void (*fun_ptr)(int) = fun;
    clrscr();
    fun_ptr(10);
    getch();
}