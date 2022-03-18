#include<stdio.h>

int main(){
    int a, i = 1;
    
    while(i<=100){
        if(i%2 ==0){
            printf("%d is an even number\n", i);

        }
        else{
            printf("%d is an odd number\n", i);
        }
        i++;
    }
    return 0;
}