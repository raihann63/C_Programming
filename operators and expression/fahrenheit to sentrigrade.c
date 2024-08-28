#include<stdio.h>
int main()

{
    float c,f;
    printf("Enter any temparature=");
    scanf("%f",&f);

    c=(f-32)/1.8;

    printf("Centrigrade temparature=%lf",c);

    return 0;
}

