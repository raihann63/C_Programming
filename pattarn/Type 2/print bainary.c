#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n= ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {

            for(col=1;col<=row;col++)
            {
                printf("%d ",col%2);
            }
            /*if you same digit in row please print
            row%2 */

             printf("\n");
    }
}

