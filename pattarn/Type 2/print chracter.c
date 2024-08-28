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
                printf("%c ",col+64);
            }
            //for small latter use 96//

             /*if you want same charecter in row please print
            row+64 */

            printf("\n");

    }
}


