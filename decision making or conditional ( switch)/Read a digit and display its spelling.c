#include<stdio.h>
int main()
{
    int digit;
    printf("type the number = ");
    scanf("%d",&digit);

    switch(digit)
    {

        case 1:
            printf("one");
            break;

        case 2:
            printf("two");
            break;

        case 3:
            printf("three");
            break;

        case 4:
            printf("Four");
            break;

        case 5:
            printf("FIve");
            break;

    default :
          printf("Invalid");
    }

     return 0;
}
