#include <stdio.h>

int main() 
{
    int num, cpy, i = 0;
    printf("Enter desired number: ");
    scanf("%d", &num);
    cpy = num;
    
    while (num)
    {
        i++;
        num /= 10;
    }
    
    printf("There are %d digits in %d\n", i, cpy);
}