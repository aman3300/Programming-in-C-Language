// This program is to swap the values of two variables using call by value.
#include<stdio.h>
int swap(int,int);
int main(){
int a=10,b=20;
swap(a,b);
return 0;
}
int swap(int x,int y){
int temp;
temp =x;
x = y;
y = temp;
printf("\n x=%d y=%d",x,y);
}
