#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declarations */
void removeDuplicates(char * str);
void removeAll(char * str, const char toRemove, int index);


int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    printf("String before removing duplicates: %s\n", str);

    removeDuplicates(str);

    printf("String after removing duplicates: %s\n", str);

    return 0;
}


/**
 * Remove all duplicate characters from the given string
 */
void removeDuplicates(char * str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        removeAll(str, str[i], i + 1);
        i++;
    }
}

/**
 * Remove all occurrences of a given character from string.
 */
void removeAll(char * str, const char toRemove, int index)
{
    int i;

    while(str[index] != '\0')
    {
        if(str[index] == toRemove)
        {
            i = index;
            while(str[i] != '\0')
            {
                str[i] = str[i + 1];
                i++;
            }
        }
        else
        {
            index++;
        }
    }
}
