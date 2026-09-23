#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, ".UTF8");
	int a = 300;
	int b = 1000;
	int c = 100;
	int d;
	printf("Введите исходную сумму ");
	scanf_s("%d", &d);
	printf("Сдача: %d", d - (a + b + c));
	return 0;
}