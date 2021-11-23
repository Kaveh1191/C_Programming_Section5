#include <stdio.h>
/*Name:Kaveh Masoudinia
Section 5 Exercise 3
Date:11/23/2021(1400/09/02)*/
int main() {
    float base, altitude,hght,base2,r;
    float areaP,areatangle,areaTzm,areaC;
    char area;

    printf("(1)Area of a parallelogram\n"
           "(2)Area of a triangle\n"
           "(3)Area of a trapezoid\n"
           "(4)Area of a circle\n"
           "(5)QUIT\n");
    scanf(" %c",&area);

    switch (area)
    {
        case '1':
            printf("Enter base and altitude: \n ");
            scanf("%f %f",&base,&altitude);
            areaP = base * altitude;
            printf("Area of Parallelogram is: %.3f\n", areaP);
            break;
        case '2':
            printf("Enter the height and base of the Triangle:\n");
            scanf("%f %f",&hght,&base);
            areatangle = (hght*base)/2;
            printf("The area of the triangle is: %.3f\n", areatangle);
            break;
        case '3':
            printf("Enter the value for two bases & height of the trapezium: \n");
            scanf("%f %f %f",&base,&base2,&hght);
            areaTzm = 0.5 * (base + base2) * hght ;
            printf("Area of the trapezium is: %.3f\n", areaTzm);
            break;
        case '4':
            printf("Enter the radius of a circle\n");
            scanf("%f",&r);
            areaC = 3.14159*r*r;
            printf("Area of the circle = %.2f\n", areaC);
            break;
        case '5':
            return 0;

    }

    return 0;
}
