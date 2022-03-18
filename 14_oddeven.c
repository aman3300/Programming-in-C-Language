// this program is to find out if the number is even or odd.

#include<stdio.h>

int main(){
    int a;
    printf("enter the number\n");
    scanf("%d", &a);
    if(a%2 == 0){
        printf("this is even number\n");
    }
    else{
        printf("this is odd number\n");
        
    }
    return 0;
}