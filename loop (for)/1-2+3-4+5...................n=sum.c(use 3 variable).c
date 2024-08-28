#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the last term = ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        sum=sum-i;
        else
           sum=sum+i;

    }

    printf("sum=%d",sum);
}

