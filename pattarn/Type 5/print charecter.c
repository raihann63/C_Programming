#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n= ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {

            for(col=1;col<=n-row;col++)
            {
                printf(" ");
            }
          /*if you want same digit in row please print
            row */
            for(col=1;col<=row;col++)
            {
                printf("%c",col+64);
            }

             printf("\n");
    }
}

/* H.W= binary and * and # */



