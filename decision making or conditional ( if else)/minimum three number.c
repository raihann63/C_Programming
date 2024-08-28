#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter any number = ");
    scanf("%d%d%d",&x,&y,&z);

    if(x<y && x<z)
        printf("minimum number =%d",x );
    else if(y<z && y<x)
        printf("minimum number = %d",y);
    else if(z<y && z<x)
        printf("minimum number = %d",z);
    else
        printf("Equal");
}
