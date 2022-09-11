#include <stdio.h>
#include <string.h>

int main()
{
    char name[40];
    int vowel_count = 0;

    printf("Enter your formal name: ");
    gets(name);
    strcpy(name, strlwr(name));

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            printf("%c\t", name[i]);
            vowel_count++;
        }
    }
    printf("\nTotal number of vowels: %d\n", vowel_count);
}