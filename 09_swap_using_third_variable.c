// This program swap two numbers using a third variable.
#include<stdio.h>

int main(){
    int a, b, temp;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("The value of first number is %d\n", a);
    printf("The value of second number is %d\n", b);
    
    return 0;
}