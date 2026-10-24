#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");

	double x;
	double y;
	double R;//результат 

	printf("Введите значение x: ");
	scanf("%lf", &x);

	printf("Введите значение y: ");
	scanf("%lf", &y);

	R = (x + (2.0 + y) / pow(x, 2.0)) / (y + 1.0 / sqrt((pow(x, 2.0) + 10.0)));

	printf("При x=%.1lf, y=%.1lf выражение примет вид R=%.6lf\n", x, y, R);

	return 0;
}