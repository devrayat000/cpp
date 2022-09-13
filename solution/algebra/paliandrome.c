#include <stdio.h>

int reverse(int x) {
    int rem, result = 0;
    while (x)
    {
        rem = x % 10;
        result = (result * 10) + rem;
        x /= 10;
    }
    return result;
    
}

int main() 
{
    int num;
    printf("Enter desired number: ");
    scanf("%d", &num);
    
    if (num == reverse(num))
    {
        printf("The number %d is a paliandrome.", num);
    }
    else
    {
        printf("The number %d is not a paliandrome.", num);
    }
    
}