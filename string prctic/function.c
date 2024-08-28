#include<stdio.h>
 double areatrangle(double b,double h)
 {
    return 0.5*b*h;
 }

int main()
{
    double base,height;
    printf("Enter base number= ");
    scanf("%lf",&base);

    printf("Enter height number= ");
    scanf("%lf",&height);

    double area=areatrangle(base,height);
    printf("Area= %lf",area);

}


