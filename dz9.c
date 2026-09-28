#include <stdio.h>
#include <locale.h>

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