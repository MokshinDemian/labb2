#include <stdio.h>
#include <locale.h>
float chas ( int a / 60 / 60);
	return int a / 60 / 60
int main() {
	setlocale(LC_ALL, ".UTF8");
	int a;
	float result0;
	float result1;
	float result2;
	printf("Введите количество секунд...");
	scanf_s("%d", &a);
	result0 = a / 60 / 60;
	result1 =  a / 60 - result0*60;
	result2 = a % 60;
	printf("%.0f часов %.0f минут %.0f секунд", result0, result1, result2);
	return 0;


}
#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846
#include <math.h>


void main() {
	setlocale(LC_ALL, "RUS");
	float gr, res1;
	scanf_s("%f", &gr);
	res1 = gr * M_PI / 180;
	printf("Число радиан %.6f", (res1));
	printf(" Синус %.6f", sin (res1));
	return 0;


}
