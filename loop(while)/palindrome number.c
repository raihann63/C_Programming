
#include<stdio.h>
int main()

{
    int num,tem,rem,sum=0;
    printf("Enter THe Number = ");
    scanf("%d",&num);

    tem=num;

    while(tem!=0)
    {
        rem=tem % 10;
        tem=tem / 10;
        sum=sum*10+rem;
    }

    if(num==sum)
        printf("palindrome number");
    else
        printf("NOT palindrome");
}
