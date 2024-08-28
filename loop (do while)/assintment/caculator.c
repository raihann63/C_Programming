#include<stdio.h>
int main()
{
    int num1,num2,choise;
    float result;


    printf("PLYSES TYPE ANY TWO NUMBER =");
    scanf("%d%d",&num1,&num2);

    printf("CHOISE YOUR TURN  =1 2 3 4 5\n");
      scanf("%d",&choise);

    result=0;

    switch(choise)
    {
    case 1:printf("THIS TURN IS IDENTIFY FOR SUM \n");
           result=num1+num2;
           printf("THE TOTAL SUM IS = %.2f",result);
           break;
    case 2:result=num1*num2;
           printf("THE MULTIPLICATION IS = %.2f",result);
           break;
    case 3:result=(float)num1/(float)num2;
           printf("THE DIVIDED IS = %.2f",result);
           break;
    case 4:result =num1-num2;
           printf("THE SUBTRACTION IS = %.2f",result);
           break;
    case 5:result=num1%num2;
           printf("THE RESULT MODULUS IS = %f",result);
           break;

    }
   return 0;
    }

