#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <locale.h>

#define M_PI 3.14159265358979323846

int main()
{
    setlocale(LC_CTYPE, "RUS");

    double gr;
    double rad;
    double result;

    printf("Угол в градусах: ");
    scanf("%lf", &gr);

    rad = gr * M_PI / 180;
    result = sin(rad);
    printf("Синус угла %.2f градусов = %.6f\n", gr, result);

    return 0;
}