// write a program to search for a number entered by the user in a give array.

#include<stdio.h>
#include<conio.h>
void main()
{
    int n[10], i; //array declaration
    int number;
    printf("Enter 10 numbers\n");
    for(i = 0; i<10; i++){
       
        scanf("%d", &n[i]);
    }
    printf("enter any number you want to search\n");
    scanf("%d", &number);
    for(i = 0; i<10; i++){
        if(number == n[i]){
            printf("number found in the list\n");
        }
        else{
            printf("not found\n");
            
        }

    }
}
