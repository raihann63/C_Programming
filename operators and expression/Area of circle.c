
#include<stdio.h>
int main()
{
    float radius, area;
    printf("Input radius and 3.1416 = ");
    scanf("%f",&radius);

    area = 3.1416*radius*radius;

    printf("The area of circle = %.2f",area);
}

/*
#include<math.h>
#include<stdio.h>
int main()
{
    float radius, area;
    printf("Input radius and 3.1416 = ");
    scanf("%f",&radius);

    area = M_PI*radius*radius;

    printf("The area of circle = %.2f",area);
}
*/
