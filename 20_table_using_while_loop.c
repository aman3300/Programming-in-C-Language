// this program is to print the multiplication table of a given number using while loop.

#include<stdio.h>

int main(){
    int a, i = 1;
    printf("enter the number\n");
    scanf("%d", &a);
    while(i<=10){
        printf("%d X %d = %d\n", a, i, a*i);
        i++;
    }
    return 0;
}
