
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter any number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n" ,i);
        sum=sum+i;
    }
    printf("TOTAL SUM=%d",sum);

}
/*H.W=For 1+4+7........n
For 1+3+5.....n
For 1.5+2.5+3.5+.......n(useing float nbr)*/

