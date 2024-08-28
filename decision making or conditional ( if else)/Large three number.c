#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Please type three number =");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
        printf("large number = %d",a );
    else if(b>a &&  b>c)
        printf("large number = %d",b);
    else if(c>a && c>b)
        printf("large number = %d",c);
     else
            printf("equal");

}
