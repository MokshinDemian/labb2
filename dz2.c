#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, ".UTF8");
	int a = 300;
	int b = 1000;
	int c = 100;
	int d = 2000;
	printf("Введите исходную сумму ");
	printf("Сдача: %d", d - (a + b + c));
	return 0;
}
