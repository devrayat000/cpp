#include <stdio.h>

int arr[99];

void shift_array_element(unsigned int i)
{
    for (int ivalue = arr[i]; i && arr[i - 1] > ivalue; i--)
    {
        arr[i] = arr[i - 1];
        arr[i - 1] = ivalue;
    }
}

void shift_array_element(int *pElement)
{
    for (int ivalue = *pElement; (arr - pElement) > 0 && *(pElement - 1) > ivalue; pElement--)
    {
        *pElement = *(pElement - 1);
        *(pElement - 1) = ivalue;
    }
}

int main()
{
    return 0;
}