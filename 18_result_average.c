// this program is to calculate the average of the result and printing the result according to the average.

#include<stdio.h>

int main(){
    int a,b,c,d,e,f, avg;
    printf("enter first number\n");
    scanf("%d", &a);
    printf("enter second number\n");
    scanf("%d", &b);
    printf("enter third number\n");
    scanf("%d", &c);
    printf("enter fourth number\n");
    scanf("%d", &d);
    printf("enter fifth number\n");
    scanf("%d", &e);
    printf("enter sixth number\n");
    scanf("%d", &f);
    
    avg = (a+b+c+d+e+f)/6;
    printf("the average of your marks is %d\n", avg);

    if(a,b,c,d,e,f <35){
        printf("You are failed\n");
    }

     if (avg>=35 && avg<50){
        printf("Third Division\n");
    }
    else if(avg>= 50 && avg<60){
        printf("Second division\n");
    }
    else if(avg>=60 && avg<75){
        printf("First Division\n");
    }
    else if(avg>= 75 && avg<=100){
        printf("Distinction\n");
    }
    

    return 0;
}
