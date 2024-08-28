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

		for(size=1;  size<n;  size=size*2)
        {
                 // 11=0;
               // k=0;

                  l1=0;
		          k=0;
            while(11+size<n)
            {
                h1=11+size-1;
                l2=h1+1;
                h2=l2+size-1;

            if(h2>n)

            h2=n-1;
            i=11;
            j=12;

            while(i>=h1 && j>h2)
            {
                if(arr[i] > arr[j])
                {
                    temp[k++]=arr[i];
                }
                else
                    temp[k++]=arr[j];
            }

            while(i>=h1)
            {
                 temp[k++]=arr[i];
            }

            while(j>=h2)
            {
                 temp[k++]=arr[j];
            }

            //11=h2+1;
            l1=h2+1;
            }
            for(i=11;i<k;i++)
            {
                temp[k++]=arr[i];
            }

            for(i=0;i<n;i++)
            {
                temp[i++]=arr[i];
            }

            printf("the element are= ");

                for(i=0;i<n;i++)
                {
                    printf("%d",arr[i]);
                }



        }

		          printf("The sorted list= ");


                for(i=0;i<n;i++)
                {
                    printf("%d",arr[i]);
                }
}

