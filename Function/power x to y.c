#include<stdio.h>

int main()
{
    double base,exp;
    printf("enter the base= ");
    scanf("%lf",&base);
    printf("enter the Exponent= ");
    scanf("%lf",&exp);

 calculatePower(base,exp);

}
void calculatePower(double base,double exp)
{
   double result=1,i;
   for(i=1;i<=exp;i++)
   {
       result=result*base;
   }

   printf("The output is %.1lf\n",result);
}


