#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter two number=");
    scanf("%d%d",&a,&b);

    if(a>b)
        printf("LARGE NUMBER=%d\n",a);
    else if(b>a)
        printf("LARGE NUMBER =%d\n",b);

    else
        printf("zero");


}
