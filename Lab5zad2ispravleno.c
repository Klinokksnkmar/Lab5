#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>

double calculate_y(double x, double t) //вариант 12
{
	double a = exp(2 * x) + sqrt(t);
	double b = x * (t * t * t + x);
	double y = pow(log10(fabs(x)), 3) + b;
	return y;
}
int main()
{
	setlocale(LC_CTYPE, "RUS");
	double x;
	double t = 0.43;
	printf("Введите значение x");
	scanf("%lf", &x);

	double y = calculate_y(x, t);
	printf("При x=%.1f,y=%.4f\n", x, y);

	return 0;

}