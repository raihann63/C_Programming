#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enternany number=");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            sum-=i;
        else
            sum+=i;
    }
    printf("The numer of sum is=%d",sum);
}
