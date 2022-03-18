// this program is to print the multiplication table of a given number using for loop.

#include<stdio.h>

int main(){
    int a;
    printf("enter the number\n");
    scanf("%d", &a);

    for(int i = 1; i<=10; i++){
        printf("%d X %d = %d\n", a, i, a*i);
    }
    return 0;
}