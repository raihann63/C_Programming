#include<stdio.h>
int main()
{
    int arr[30],temp[30],i,j,k,h1,h2,l2,l1,size,n;

    printf("enter any number= ");
    scanf("%d",&n);

    printf("type your number= ");
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }

     printf("your unsorted data = ");

     for(i=0;i<n;i++)
     {
        printf("%d",arr[i]);

     }


     for(size=1;size<n;size=size*2)
     {
         l1=0;
         temp=0;
         while(l1+size<n)
         {
             h1=l1+size-1;
             l2=h1+1;
             h2=l2+size-1;
         }
          if(h2>=n)
          {
              h2=n-1;
          }
          i=l1;
          j=l2;

         while(i<h1 && j<h2)
            if(arr[i] <= temp[j])















     }




}
