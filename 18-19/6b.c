#include <stdio.h>
#include <math.h>

// Incomplete
int main()
{ 
    FILE *fr = fopen("cgpa.txt", "r+");
    // FILE *fa = fopen("cgpa.txt", "a");

    int id;
    float gpa1, gpa2, cgpa;

    for (int i = 0; i < 4; i++)
    {
        fscanf(fr, "%d%f%f", &id, &gpa1, &gpa2);
        cgpa = (gpa1 + gpa2) / 2;
        // fseek(fa, 0, SEEK_SET);
        fprintf(fr, "\t\t%.2f\n", cgpa);
    }  

    // fclose(fa);
    fclose(fr);
    return 0;
}