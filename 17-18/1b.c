#include <stdio.h>

struct employee
{
    char name[20];
    int salary;
};

void display(struct employee *e) {
    printf("Name: %s\n", e->name);
    printf("Salary: %u\n", e->salary);
}

int main()
{
    struct employee a = {"Khalid", 75000};
    display(&a);

    return 0;
}