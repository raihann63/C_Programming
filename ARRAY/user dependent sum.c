#include<stdio.h>
int main()
{
int num[100],sum=0,i,n;

printf("How many number= ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    scanf("%d",&num[i]);
}
for(i=0;i<n;i++)
{
    sum=sum+num[i];
}

printf("the sum = %d\n",sum);
printf("avarage %.2f\n",(float)sum/n);

}

