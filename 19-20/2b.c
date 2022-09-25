#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    FILE *file = fopen("2b.data.txt", "r");
    FILE *file2 = fopen("2b.bmi.txt", "a");
    float w, h, bmi;

    while (fscanf(file, "%f%f", &w, &h) != EOF)
    {
        // Dumb fuck mechanical engineer doesn't know the formula of BMI
        bmi = w / pow(h / 100, 2);
        fprintf(file2, "%.2f\n", bmi);
    }
    
    fclose(file2);
    fclose(file);
    return 0;
}