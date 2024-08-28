#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter any number = ");
    scanf("%d",&n);

    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("Total sum=%d",sum);
}
