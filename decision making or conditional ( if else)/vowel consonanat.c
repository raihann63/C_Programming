#include<stdio.h>
int main()
{
    char ch;
    printf("Type any alphabate= ");
    scanf("%c", &ch);

    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')

       printf("vowel");

    else
        printf ("consonant");

}
