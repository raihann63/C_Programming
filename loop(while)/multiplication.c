#include<stdio.h>
int main()
{
 while(1)
    {

 int num,i=1;
 printf("PRESS THE NUMBER = ");
 scanf("%d",&num);

 while(i<=10)
   {
     printf("%d x %d = %d\n",num,i,num*i);
     i++ ;
   }

   }
}
