#include <stdio.h>
int main()
{
    FILE *ptr;
    char text[30];
    int age;
    ptr = fopen("hello.txt", "w");
    printf("Enter text in your File ");
    gets(text);
    fprintf(ptr, "%s", text);
    fclose(ptr);
    ptr = fopen("hello.txt", "r");
    fscanf(ptr, "%s%d", text, &age);
    printf("name of Student %s ,and Age is %d \n", text, age);
    fclose(ptr);
    return 0;
}
