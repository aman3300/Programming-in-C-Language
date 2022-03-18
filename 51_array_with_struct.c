#include <stdio.h>
struct student
{
    char name[100];
    int Age, ID;
};
int main()
{
    struct student stu[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter three student[%d] info like name Age ID \n", i);
        scanf("%s%d%d", stu[i].name, &stu[i].Age, &stu[i].ID);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Student[%d] NAME is %s \n", i, stu[i].name);
        printf("Student[%d] Age is %d \n", i, stu[i].Age);
        printf("Student[%d] student id is %d \n", i, stu[i].ID);
    }
    return 0;
}
