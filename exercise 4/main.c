#include <stdio.h>
#include <math.h>
/*Name:Kaveh Masoudinia
Section 5 Exercise 4
Date:11/23/2021(1400/09/02)*/
int main() {
    float cons =7.99;
    float vari=1.99;
    float afovr;
    float ovr=0,noruse,final;
    int mD,yD,Cnum;
    float intuse;

    printf("month and year:\n");
    scanf("%d %d",&mD,&yD);
    printf("customer number:\n");
    scanf("%d",&Cnum);
    printf("Number of hours of internet use:\n");
    scanf("%f",&intuse);




    if(intuse==10){
        noruse=intuse*cons;
        printf("month and year:%d %d% \ncustomer number: %d \nNumber of hours of internet use:%.2f\n Internet bill:%.2f$",mD,yD,Cnum,intuse, round(noruse));
    }
    else if (intuse>10){
        ovr=intuse-10;
        ovr=ovr*vari;
        noruse=10*cons;
        final=ovr+noruse;
        afovr=ovr-10;
        printf("month and year:%d %d\ncustomer number: %d\nNumber of hours of internet use:%.2f\n Internet bill:%.2f$\n over use:%.0f",mD,yD,Cnum,intuse,round(final),
               round(afovr));
    }

    return 0;
}
