#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846
double rad(double x)
{
	return (x * M_PI) / 180;
}
double znamen(double x, double y)
{
	return  (1 + pow(y - x, 2));
}
double pred(double x, double y)
{
	return fabs(pow(x, y / x) - pow(y / x, 1. / 3.));
}
double chisl(double x, double y, double z)
{
	return (y - x) * cos(rad(y)) - z / (y - x);
}
int main(void) {
	double gm, z, x, y, m;
	scanf_s("%lf %lf %lf", &x, &y, &z);
	gm = pred(x,y) - chisl(x,y,z) / znamen(x, y);
	printf("%lf\n", gm);
	system("pause");
}
