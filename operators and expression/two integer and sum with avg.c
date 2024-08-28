#include<stdio.h>
int main()
{
float avg;
int num1,num2,sum;
printf("total sum=");
scanf("%d %d",&num1,&num2);

sum=num1 +num2;
printf("Total sum=%d\n",sum);

avg=(float)sum/2;
printf("the avg is =%f\n",avg);


return 0;
}
