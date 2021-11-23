#include <stdio.h>
/*Name:Kaveh Masoudinia
Section 5 Exercise 1
Date:11/23/2021(1400/09/02)*/


int main() {
    int num,cunt;
    int od=0;
    int evn=0;
    printf("Enter your number:\n");
    scanf("%d",&num);

    while (num > 0){
        cunt= num %10;
        if(cunt % 2 ==1)
            od++;
        else
            evn++;
        num=num/10;
    }
    printf("even:%d , odd:%d",evn,od);

    return 0;
}
