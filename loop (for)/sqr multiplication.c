
#include<stdio.h>
int main()
{
    int i,n,result=1;
    printf("Enyer any number =");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        result=result*i*i;

    }
    printf("Answer: %d",result);


}

