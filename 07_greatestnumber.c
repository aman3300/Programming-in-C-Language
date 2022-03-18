// this program is to detect which number is greatest in the given 3 numbers, entered by the user.

#include<stdio.h>

int main(){
    int a, b, c;
    printf("enter first number\n");
    scanf("%d", &a);
    printf("enter second number\n");
    scanf("%d", &b);
    printf("enter third number\n");
    scanf("%d", &c);

    if (a>b){
        if(a>c){
            printf("%d is greatest of them all\n", a);
        }
        else{
            printf("%d is greatest of them all\n", c);

        }
    }
    else if(b>a){
        if(b>c){
            printf("%d is greatest of them all\n",b);

        }
        else{
            printf("%d is greatest of them all\n",c);

        }
    }
    return 0;
}