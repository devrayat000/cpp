#include<stdio.h>

struct Student
{
    char name[999];
    int roll;
    float cgpa;
};


int main()
{
    struct Student rayat = {"Zul Ikram Musaddik Rayat"};

    printf("Enter roll: ");
    scanf("%d", &rayat.roll);

    printf("Enter CGPA: ");
    scanf("%f", &rayat.cgpa);

    printf("Name:\t%s\n", rayat.name);
    printf("Roll:\t2010%.3d\n", rayat.roll);
    printf("CGPA:\t%.2f\n", rayat.cgpa);
    
    return 0;
}
