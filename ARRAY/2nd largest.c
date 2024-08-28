#include <stdio.h>
int main()
{
    int arr[100],i,n;
    printf("How many number= ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)//int i=0
    {
        scanf("%d",&arr[i]);
    }
    int firstLarge=arr[0],secoundLarge;
    for (i = 0; i < n; i++)
    {

        if(firstLarge<arr[i])
        {
            firstLarge=arr[i];
        }
    }
    if(firstLarge==arr[0])
        secoundLarge=arr[1];

    else
        secoundLarge=arr[0];

    for (i = 0; i < n; i++)
    {
        if(secoundLarge<arr[i] && firstLarge!=arr[i])
            secoundLarge=arr[i];

    }
    printf("Second largest= %d",secoundLarge);
    return 0;
}
