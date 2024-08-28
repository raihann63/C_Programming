#include<stdio.h>
int main()
{
    int num[100],value,i,pos=-1,n;

    printf("how many number  =");
    scanf("%d",&n);

    printf("please type your number  =");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    printf("search your Value  = ");
    scanf("%d",&value);

    for(i=0;i<n;i++)
    {
        if(value==num[i])
        {
            pos = i+1;
            break;
        }
    }

    if(pos==-1)
    {
        printf("Item not found");

    }
    else
        printf("The value is found %d position",pos);


}
