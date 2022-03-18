#include<stdio.h>
int diff(int *a, int *b);
int mult(int *a, int *b);
int div(int *a, int *b);
int main(){
    int a, b;
    sum(&a, &b);
    diff(&a, &b);
    mult(&a, &b);
    div(&a, &b);
    return 0;
}
int sum(int *a, int *b){
    int sum;
    printf("Enter two numbers\n");
    scanf("%d %d", &(*a), &(*b));
    sum = *a + *b;
    printf("The Sum of these two numbers is %d\n", sum);
    return sum;
}
int diff(int *a, int *b){
    int diff;
    diff = *a - *b;
    printf("The Difference of these two numbers is %d\n", diff);
    return diff;
}
int mult(int *a, int *b){
    int mult;
    mult = (*a) * (*b);
    printf("The Multiplication of these two numbers is %d\n", mult);
    return mult;
}

int div(int *a, int *b){
    int div;
    div = (*a)/(*b);
    printf("The Division of these two numbers is %d\n", div);
    return div;
}

