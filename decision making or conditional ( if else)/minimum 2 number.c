#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number = ");
    scanf("%d%d",&a,&b);

    if(a<b)
        printf("minimum number=%d",a);
    else if(b<a)
        printf("minimum number = %d",b);
    else
        printf("Equal");
}
