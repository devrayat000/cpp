#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *newword()
{
    char *countries[] = {"BD", "IN", "USA", "UK", "PAK"};

    time_t t;
    srand((unsigned)time(&t));
    int r = rand() % 5;
    
    return countries[r];
}

int main()
{
    char *word = newword();
    int len = strlen(word);

    printf("Country: %s, length: %d", word, len);

    return 0;
}