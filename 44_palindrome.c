// write a program to check if a string is palindrome or not,using pre-defined function strcmp.

#include<stdio.h>
#include<string.h>

int main(){
    char string1[20] , string2[20];
    printf("enter the string\n");
    gets(string1);
    strcpy(string2, string1);
    strrev(string2);
    if(strcmp(string1, string2) == 0){
        printf("string is palindrome\n");

    }
    else{
        printf("it is not a palindrome\n");
    }

    return 0;
}
