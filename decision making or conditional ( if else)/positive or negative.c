#include<stdio.h>
int main()
{
    int num ;
    printf("ANY NUMBER = ");
    scanf("%d",&num);
    if(0<num)
        printf("positive");
    else if (0>num)
        printf("negative");
    else
        printf("ZERO");
}
