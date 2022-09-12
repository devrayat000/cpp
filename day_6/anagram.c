#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char* strsort(char*);

int main()
{
    char a[40], b[40];

    printf("Enter first word: ");
    gets(a);
    printf("Enter second word: ");
    gets(b);

    strsort(a);
    strsort(b);
    bool isAnagram = !strcmp(a, b);

    if (isAnagram)
        printf("Words are anagram.");
    else
        printf("Words are not anagram.");

    return 0;
}

char* strsort(char *a1)
{
    char temp;
    for (int i = 0; a1[i] != '\0'; i++)
    {
        for (int l = i + 1; a1[l] != '\0'; l++)
        {
            if (a1[i] > a1[l])
            {
                temp = a1[i];
                a1[i] = a1[l];
                a1[l] = temp;
            }
        }
    }
    return a1;
}
