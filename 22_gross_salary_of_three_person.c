// this program is to calculate gross salary of three persons when their basic salary is entered through the keyboard.
// hra = 90% of basic salary, da = 10% of basic salary


#include<stdio.h>

int main(){
    int i = 1, bs, hra, da, gs;
    
    while(i<=3){
        printf("enter your basic salary\n");
        scanf("%d", &bs);
        hra = (bs*90)/100;
        da = (bs)/10;
        gs = hra+da+bs;

        printf("your gross salary is %d\n", gs);
        i++;
    }


    return 0;
}