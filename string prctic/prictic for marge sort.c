#include <stdio.h>
#define MAX 30
int main()
{
	 //int arr[MAX],temp[MAX],i,n,j,k,size,11,h1,h2,l2;
     int arr[MAX],temp[MAX],i,j,k,n,size,l1,h1,l2,h2;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
    printf("please type your choosen element=  " );
	for(i=0;i<n;i++)
	{

		scanf("%d",&arr[i]);

	}
        printf("Unsorted list is = ");

		for( i = 0 ; i<n ; i++)
		printf("%d ", arr[i]);


}
