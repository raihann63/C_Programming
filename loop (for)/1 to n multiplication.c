#include<stdio.h>
int main()
{
    int i,n,result=2;
   printf("Enter any number =");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        result=result*i;


    }
    printf("Answer: %d",result);
}
