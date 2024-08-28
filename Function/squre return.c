#include<stdio.h>
int square(int a,int b)
{
  return a*b;
}
int main()
{
   int num1,num2;
   printf("Enter any number = ");
   scanf("%d%d",&num1,&num2);

   int result=square(num1,num2);
   printf("the squre is = %d\n",result);
}
