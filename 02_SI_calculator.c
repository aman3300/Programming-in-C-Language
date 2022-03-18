// This is a program to calculate simple interest.
// SI = (p*r*t)/100

#include<stdio.h>

int main(){
    int p, r, t, si;
    printf("enter the value of principal\n");
    scanf("%d", &p);
    printf("enter the rate of interest\n");
    scanf("%d", &r);
    printf("enter the number of years\n");
    scanf("%d", &t);

    si = (p*r*t)/100;
    printf("The value of simple interest is %d", si);

    return 0;
}