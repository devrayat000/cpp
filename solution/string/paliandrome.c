#include <stdio.h>
#include <string.h>

int main() 
{
    char str[50], *rev;
    printf("Enter a word: ");
    gets(str);
    rev = strcpy(rev, str);
    strrev(rev);

    if (!strcmp(str, rev))
    {
        printf("The string '%s' is a paliandrome.\n", str);
    }
    else
    {
        printf("The string '%s' is not a paliandrome.\n", str);
    }
    
}