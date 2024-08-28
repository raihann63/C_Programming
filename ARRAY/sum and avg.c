#include<stdio.h>
int main()
{
    int num[100],i,n,sum=0;
    printf("Enter any number=");
    scanf("%d",&n);
    printf("please type %d number=",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+num[i];
    }

    printf("The total sum= %d\n",sum);
    printf("The avg = %f\n",(float)sum/n);
}
