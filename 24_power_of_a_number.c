// two numbers are entered through the keyboard, this program is to calculate the value of one number raised to the power of another.
#include<stdio.h>
#include<math.h>

int main(){
    int a, b, p;
    printf("enter first number\n");
    scanf("%d", &a);
    printf("enter second number\n");
    scanf("%d", &b);
    p = pow(a,b);
    printf("the value of %d raised to the power %d is %d", a, b, p);

    

    return 0;
}