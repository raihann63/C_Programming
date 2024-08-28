#include<stdio.h>
int main()
{
    int a[100],i,n;

    printf("How many number = ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  int max=a[0];

  for(i=1;i<n;i++)
  {
      if(max<a[i])
        max=a[i];
  }
  printf("maximum= %d\n",max);

}
