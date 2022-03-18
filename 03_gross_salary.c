// Ramesh Basic Salary is input to keyboard, his DA is 40% of his basic salary, & HRA is 20% of his basic salary.
// This program is written to find his gross salary
// gross salary = DA + HRA + basic salary

#include<stdio.h>

int main(){
    int da, bs, hra, gs;
    printf("Enter your basic salary\n");
    scanf("%d", &bs);
    da = (bs*40)/100;
    hra = (bs*20)/100;
    gs = hra+da+bs;
    printf("your gross salary is %d", gs);
    

    return 0;
}

