#include <stdio.h>

float total_heat(float, float, float, float);

int main()
{
    printf("Process Started\n");

    float t1, t2, x1, x2;
    printf("Input T1 & T2: ");
    scanf("%f %f", &t1, &t2);
    printf("Input X1 & X2: ");
    scanf("%f %f", &x1, &x2);

    float heat = total_heat(44, 22, t2 - t1, x2 - x1);
    printf("Total heat is %.2f", heat);

    return 0;
}

float total_heat(float k, float a, float dt, float dx)
{
    float h = k * a * dt / dx;
    return h;
}
