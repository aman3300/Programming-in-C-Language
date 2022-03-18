// this program is written to convert temperature from "Farheneit degree" to "celcius degree".
// (F − 32) × 5/9 = C

#include<stdio.h>

int main(){
    float f, c;
    printf("enter the temperature in degree farheneit\n");
    scanf("%f", &f);
    c = ((f-32)*5)/9;
    printf("the temperatuer in degree celcius is %f", c);
    
    return 0;
}