#include<stdio.h>
int maximum(int x[])
{
    int i;
    int max=x[0];
    for(i=1;i<5;i++)
    {
        if(max<x[i])
            max=x[i];
    }
    return max;
}

int main()
{
    int num[]={3,5,6,7,8};
    int maximumvalue=maximum(num);
    printf("%d\n",maximumvalue);
}
