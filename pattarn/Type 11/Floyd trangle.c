#include<stdio.h>
int main()
{
    int row,col,n,count=0;
    printf("Enter n= ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
       for(col=1;col<=row;col++)
       {

               printf("%d ",++count);
       }
       printf("\n");

    }
}
//www.techcrashcourse.com (for practice)//

