
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter any number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n" ,i*i);//
        sum=sum+i*i;
    }
    printf("TOTAL SUM=%d",sum);
}
