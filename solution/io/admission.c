#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

struct student
{
    unsigned int serial;
    unsigned int form_number;
};

bool array_has(int arr[], int len, int elem)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == elem)
            return true;
    }
    return false;
}

int main()
{
    // Number of students
    int n = 5;
    // scanf("%d", &n);

    FILE *formFile = fopen("appforms.txt", "r");
    FILE *admissionFile = fopen("admissions.txt", "w");
    int i = 1, random_serial;
    int ids[n];
    struct student temp;

    srand((unsigned)time(0));

    fprintf(admissionFile, "Serial No\tForm No\t\t\tSeat No\n");
    fprintf(admissionFile, "---------\t-------\t\t\t-------\n");

    while ((i <= n) && (fscanf(formFile, "%d%d", &temp.serial, &temp.form_number) != EOF))
    {
        random_serial = rand() % 10 + 1;
        while (array_has(ids, i - 1, random_serial))
            random_serial = rand() % 10 + 1;

        while ((random_serial != temp.serial) && (fscanf(formFile, "%d%d", &temp.serial, &temp.form_number) != EOF))
        {
        }
        fprintf(admissionFile, "%d\t\t\t%d\t\t\tSerial no. %d\n", temp.serial, temp.form_number, i);
        fseek(formFile, 0, SEEK_SET);
        ids[i - 1] = temp.serial;
        i++;
    }

    fclose(admissionFile);
    fclose(formFile);
    return 0;
}