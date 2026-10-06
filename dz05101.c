#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846


int main(void) {
	double gm, z, x, y, m;
	scanf_s("%lf %lf %lf", &x, &y, &z);
	m = (y * M_PI) / 180;
	gm = fabs(pow(x, y / x) - pow(y / x, 1. / 3.)) - ((y - x) * cos(m) - z / (y - x)) / (1 + pow(y - x, 2));
	printf("%lf", gm);
	return 0;

}