#include<stdio.h>
int main()
{
    double i,n,sum=0;
    printf("Enter any number = ");
    scanf("%lf",&n);
    for(i=1;i<=n;i=i+1)
        {
          sum=sum+(1/i);
          if(i==1)
            printf("1+");

            else if(i==n)
            printf("(1/%lf)",i);
            else
            printf("(1/%lf)+",i);

        }
        printf(" =%lf\n",sum);
}
