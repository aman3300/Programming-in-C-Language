// this program is to find if the number is even or not using conditional instructors.

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