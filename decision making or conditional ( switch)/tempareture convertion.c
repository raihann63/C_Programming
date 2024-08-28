#include<stdio.h>
int main()
{
    int num;
    float temp,tempidentify;
    printf("TEMPARATURE VONVERTION MENU\n");
    printf("1.Fahrenheit to celcious\n");
    printf("2.Celceous to fahrenheit\n");
    printf("CHOOSE THE DIGIT :");
    scanf("%d",&num);

    switch(num)
    {
    case 1:
        {
            printf("Fahrenheit to Celceous=");
            scanf("%f",&temp);
            tempidentify=(temp-32)/1.8;
            printf("ceacious = %f\n",tempidentify);
            break;
        }
    case 2:
        {
             printf("C to F = ");
            scanf("%f",&temp);
            tempidentify=(1.8*temp)+32;
            printf("Fahrenheit= %f\n",tempidentify);
        }

    default :
         printf("No correct option");
    }
}
