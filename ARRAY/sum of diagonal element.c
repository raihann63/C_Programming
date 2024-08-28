#include<stdio.h>
int main()
{
int A[3][3],i,j,row,col,sum;

printf("\n enter the element of matrix.\n");

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("A[%d][%d] = ",i,j);
        scanf("%d",&A[i][j]);
    }
}

printf("\nEntered the matrix\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d ",A[i][j]);
    }
    printf("\n");
}
printf("Diaognal Element= ");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
      if(i==j)
      {
          printf("%d ",A[i][j]);
           sum=sum + A[i][j];
      }
    }
}
printf("\nsum of siagonal element = %d\n",sum);
}



