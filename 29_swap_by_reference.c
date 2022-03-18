#include<stdio.h>
void swap(int *a, int *b);
int main(){
    int a, b;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("The value of a and b before swapping is %d and %d respectively\n", a, b);
    swap(&a,&b);
    printf("The value of a and b after swapping is %d and %d respectively\n", a, b);
    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}