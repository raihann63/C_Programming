#include<stdio.h>
int main()
{
    int A[3][3],i,j,uppersum=0,lowersum=0;

    printf("\n enter the element of matrix.\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n entered matrix\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");

    }
      for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                if(i<j)
                {
                    uppersum=uppersum + A[i][j];
                }
                if(i>j)
                {
                    lowersum=lowersum + A[i][j];
                }
            }
        }
        printf("\nsum of upper tringle element = %d\n",uppersum);
        printf("\nsum of lower tringle element = %d\n",lowersum);
}
