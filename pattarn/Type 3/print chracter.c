#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n= ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {

            for(col=1;col<=row;col++)
            {
                printf("%c ",col+64);
            }
          /*if you want same digit in row please print
            row */

             printf("\n");
    }


    for(row=n-1;row>=1;row--)
    {

            for(col=1;col<=row;col++)
            {
                printf("%c ",col+64);
            }
          /*if you want same digit in row please print
            row */

             printf("\n");
    }
}


