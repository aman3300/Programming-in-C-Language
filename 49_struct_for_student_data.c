#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct std
{
    char name[20];
    int rollno;
    int age;
};
void main()
{
    struct std s[10];
    int i, n;
    clrscr();
    for (i = 0; i < 10; i++)
    {
        printf("enter the details of students");
        printf("\n roll no of student");
        scanf("%d", s[i].rollno);
        printf("\n enter name of student");
        scanf("%s", &s[i].name);
        printf("\n enter age of student");
        scanf("%d", s[i].age);
    }
    for (i = 0; i < 10; i++)
    {
        printf("\n name:%s", s[i].name);
        printf("\n age :%d", s[i].age);
        printf("\n rollno:%d", s[i].rollno);
    }
    getch();
}