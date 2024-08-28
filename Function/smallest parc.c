#include<stdio.h>
int minimum(int a, int b)
{
    int temp;

    if(a<b)
    {
        temp=a;
    }
    else
    {
        temp=b;
    }
    return temp;
}

int main()
{
    int c,d,e;
    int t1,t2;
    printf("Type your number= ");
    scanf("%d%d%d",&c,&d,&e);

    t1=minimum(c,d);
    t2=minimum(t1,e);
    printf("The smallest number= %d",t2);
    return 0;
}
