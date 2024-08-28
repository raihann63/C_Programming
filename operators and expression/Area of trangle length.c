#include<stdio.h>
int main()
{
    double a,b,c,area,s;
    printf("Enter three number = ");
    scanf("%lf %lf %lf",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("THE AREA=%.2lf",area);

    return 0;

}
