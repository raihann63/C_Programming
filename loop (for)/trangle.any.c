#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("enter three number=");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1==side2 && side2==side3)
        printf("equila");
    else if(side1==side2 && side2==side3 && side3==side1)
        printf("rs");

    else
        printf("ls");

    return 0;
}
