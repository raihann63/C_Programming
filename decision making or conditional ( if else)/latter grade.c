#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the mark =" );
    scanf("%d",&mark);

    if(mark>=100 || mark<=0)
        printf("invalid");

    else if(mark>=80 && mark<=100)
        printf("YOUR ACHIVED=A+");

    else if(mark>=70 && mark<=79)
        printf("YOUR ACHIVED=A");

    else if(mark>=60 && mark<=69)
        printf("YOUR ACHIVED=A-");

    else if(mark>=50 && mark<=59)
        printf("YOUR ACHIVED=B");


     else if(mark>=45 && mark<=49)
        printf("YOUR ACHIVED=C");
     else if(mark>=40 && mark<=44)
        printf("d");
      else
        printf("WE ARE PROUD,YOUR ACHIVED=Fail");
}
