//  this program is to convert the distance between two cities entered in km to metre, cm, feet, inches.

#include<stdio.h>

int main(){
    float km, m, cm, inch, feet;
    printf("enter the distance between two cities in km\n");
    scanf("%f", &km);
    m = km*1000; //kilometer ki value ko 1000 se multiply karenge tab metric value milegi
    cm = m*100;  //metric value ko 100 se multiply karenge tab centimetric value milegi
    inch = 0.393701*cm; //cm value ko 0.393701 se multiply karenge tab inch value milegi
    feet = inch/12; // inch value ko 12 se divide karenge tab feets me value milegi
    printf("the distance in metres is %f\n", m);
    printf("the distance in centimeters is %f\n", cm);
    printf("the distance in inches is %f\n", inch);
    printf("the distance in feets is %f\n", feet);



    return 0;
}