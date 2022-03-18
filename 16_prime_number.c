// this program is to find if the entered number is prime number or

#include<stdio.h>

int main(){
    int a , i = 2, prime = 1;
    printf("enter the number\n");
    scanf("%d", &a);

    for(i = 2; i<a; i++){ //increasing the value of i and trying to divide the entered the number by i until the value is increased till (a-1)
        if(a%i == 0){
            prime = 0; //if number get divided by any value of i, the prime value will become "0"
            break;
        }
        
    }
    if(prime == 0){
        printf("this number is not a prime number\n"); // if prime value becomes 0 means number can be divided by any number.
    }
    else{
        printf("this is a prime number\n"); //if prime value doesn't becomes 0 means the number couldn't be divided by any other number.
    }
    return 0;
}
