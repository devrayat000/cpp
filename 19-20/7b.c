#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char word[10];
    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] < 97)
        {
            word[i] += 32;
        }
        
    }

    printf("Final word is %s\n", word);
    
    
    return 0;
}