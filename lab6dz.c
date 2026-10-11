#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, ".UTF8");
	int x1;
	puts("Введите число");
	scanf_s("%d", &x1);
	printf("%d / %d / %d / %d - %s\n", x1 / 1000, x1 % 1000 / 100, x1 % 1000 % 100 / 10, x1 % 10, x1 % 2 ? "Нечетное" : "Четное");
	system("pause");
}