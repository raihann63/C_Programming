#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter three number = ");
    scanf("%d%d",&a,&b);

    switch(a>b)
    {
 case 0:
    printf("%d",b);
    break;

case 1:
    printf("%d",a);
    break;
    }
}
