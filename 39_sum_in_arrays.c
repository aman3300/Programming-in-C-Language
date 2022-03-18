#include<stdio.h>

int main(){
    int add = 0;
    int sum[10];
    for(int i = 0;i<10;i++){
        printf("Enter the value for element %d\n", i+1);
        scanf("%d", &sum[i]);
        add = add+ sum[i];
    }
    printf("The sum of all these numbers is %d\n", add);
    return 0;
}