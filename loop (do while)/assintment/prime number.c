#include<stdio.h>
int main()
{
    int i,num,count=0;
    printf("TYPE THE NUMBER :");
    scanf("%d",&num);

    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }


       if(count==0)
       printf("prime number\n");

     else
        printf("invalid or not prime number");

  }
