#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,f,g,h;

    printf("PLEASE TYPE & ENTER COFFICIENT NUMBER =");
    scanf( "%f%f%f",&a,&b,&c );
    d=(b*b)-4*a*c;
    printf("The Discriminant =%.1f\n",d);

    g=-b/2*a;

    if(d>0)
    {
        e=(-b+sqrt(d))/2*a;
        f=(-b-sqrt(d))/2*a;
        printf("x1=%.2f \n x2=%.2f",e,f);
    }
    else if(d==0)
    {
        g=-b/2*a;
        printf("x1=x2=%.2f",g);
    }
    else if(d<0)
    {
        h=-b/2*a;
        e=sqrt(-d)/2*a;

        printf("X1=%.2f+%.2fi \n X2= %.2f-%.2fi",h,e,h,e);
    }


}
