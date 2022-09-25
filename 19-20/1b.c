#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct student
{
    int id;
    int numbers[3];
};


int main()
{
    struct student stds[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter student id: ");
        scanf("%d", &stds[i].id);
        printf("Enter three class test numbers: ");
        scanf("%d%d%d", &stds[i].numbers[0], &stds[i].numbers[1], &stds[i].numbers[2]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Student id: %d\n", stds[i].id);
        scanf("Marks: %d, %d, %d\n\n", stds[i].numbers[0], stds[i].numbers[1], stds[i].numbers[2]);
    }    
    
    return 0;
}