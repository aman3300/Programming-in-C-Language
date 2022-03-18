#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int len, len1;
    char str[100];
    char str1[100];
    int choice, val;
    do
    {
        printf("choice 1 for calculating length of String \n ");
        printf("choice 2 for concatenate of String \n ");
        printf("choice 3 for copy string one to Another \n ");
        printf("choice 4 for compare two strings \n ");
        printf("choice 5 for Exit\n ");
        printf("Enter you choice ");
        scanf("%d", &choice);
        printf("Enter your string1 \n ");
        scanf("%s", str);
        printf("Enter your string2 \n ");
        scanf("%s", str1);
        switch (choice)
        {
        case 1:
            len = strlen(str);
            printf("length of string %d \n ", len);
            len1 = strlen(str1);
            printf("length of string %d \n ", len1);
            break;
        case 2:
            strcat(str1, str);
            printf("%s\n", str1);
            break;
        case 3:
            strcpy(str1, str);
            printf("%s \n ", str1);
            break;
        case 4:
            val = strcmp(str, str1);
            printf("%d \n ", val);
            break;
        case 5:
            printf("Thank you \n");
            exit(0);
            break;
        default:
            printf("you entered defult choice");
            break;
        }
    } while (1);
    return 0;
}
