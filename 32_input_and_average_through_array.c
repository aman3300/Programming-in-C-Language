#include<stdio.h>

int main(){
    int sum = 0;
    float avg;
    int class[50];
    for(int i = 0; i<50; i++){
        printf("Enter the marks of student %d\n", i+1);
        scanf("%d", &class[i]);
        sum = sum+ (class[i]);
    }
    avg = sum/50;
    printf("The Average of all these students is %f", avg);
    
    return 0;
}