// this program is to calculate the perimeter of rectangle and area and circumference of the circle .

#include<stdio.h>

int main(){
    int l, b, perimeter;
    float area, circumference, r;
    printf("enter the length of the rectangle( in centimeters)\n");
    scanf("%d", &l);
    printf("enter the breadth of the rectangle( in centimeters)\n");
    scanf("%d", &b);
    perimeter = (l+b)*2;
    printf("the perimeter of this rectangle is %d\n", perimeter);

    printf("enter the radius of the circle\n");
    scanf("%f", &r);

    area = r*r*3.14;
    circumference = 2 *3.14*r;
    printf("the area of this circle is %f\n", area);
    printf("the circumference of this circle is %f", circumference);


    return 0;
}

