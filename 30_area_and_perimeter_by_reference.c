#include<stdio.h>
float perimeter(float *a, float pi);
float area(float *a, float pi);
int main(){
    float pi = 3.14, r;
    printf("Enter the radius of circle\n");
    scanf("%f", &r);
    printf("The perimeter of this circle is %f\n", perimeter(&r, pi));
    printf("The area of this circle is %f\n", area(&r, pi));


    return 0;
}
float perimeter(float *a, float pi){
    float perimeter;
    perimeter = (*a)*2*pi;
    return perimeter;

}
float area(float *a, float pi){
    float area;
    area = (*a)*(*a)*pi;
    return area;
}