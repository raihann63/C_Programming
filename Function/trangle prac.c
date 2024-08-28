#include<stdio.h>
int trangleArea(int a,int b)
{

   return 0.5*a*b;
}

int main()
{
    int base,height;
    printf("enter the base= ");
    scanf("%d",&base);
    printf("enter the height= ");
    scanf("%d",&height);

    int area=trangleArea(base,height);
    printf("Area= %d",area);

}
