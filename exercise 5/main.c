#include <stdio.h>
/*Name:Kaveh Masoudinia
Section 5 Exercise 5
Date:11/23/2021(1400/09/02)*/
int main() {
    char operator;
    int n1, n2;
    int Aop,Sop,Mop,Dop,Fop;
    int fact=1,i;

    printf("1: Addition\n"
           "2: Subtraction\n"
           "3: Multiplication\n"
           "4: Division\n"
           "5: Factorial\n"
           "6: Quit\n ");
    scanf("%c", &operator);



    switch(operator)
    {
        case '1':
            printf("Enter two numbers: ");
            scanf("%d %d",&n1, &n2);
            Aop=n1+n2;
            printf("%d",Aop);
            break;

        case '2':
            printf("Enter two numbers: ");
            scanf("%d %d",&n1, &n2);
            Sop=n1-n2;
            printf("%d",Sop);
            break;

        case '3':
            printf("Enter two numbers: ");
            scanf("%d %d",&n1, &n2);
            Mop=n1*n2;
            printf("%d",Mop);
            break;

        case '4':
            printf("Enter two numbers: ");
            scanf("%d %d",&n1, &n2);
            Dop=n1/n2;
            printf("%d",Dop);
            break;
        case '5':
            printf("Enter a numbers:");
            scanf("%d",&n1);
            for (i = 1; i <= n1; ++i) {
                fact *= i;
            }
                printf("%d",fact);
            break;
        case '6':
            return 0;
        default:
            printf("Error!!!!");
    }
    return 0;
}