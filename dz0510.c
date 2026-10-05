#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, ".UTF8");
	int a, b;
	puts("Введите числа...");
	scanf_s("%d %d", &a, &b);
	if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0)) {
		printf("Налево\n");
	}
	else {
		printf("Направо\n");
	}
	system("pause");
}
