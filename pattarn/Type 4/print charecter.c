#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n= ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {

            for(col=1;col<=n-row;col++)
            {
                printf(" ");
            }

            for(col=1;col<=row;col++)
            {
                printf("%c",col+64);
            }
            /*if you want same charecter in row please print
            row */

             printf("\n");
    }
}


