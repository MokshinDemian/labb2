#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, ".UTF8");
	int a, b;
	puts("Введите числа...");
	scanf_s("%d %d", &a, &b);
	printf("%d\n", a % 2 != b % 2);
	puts("1 - Налево, 0 - Направо");
	system("pause");
}
