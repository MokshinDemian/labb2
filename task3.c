#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, ".UTF8");
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d\n", a % 2 ^ b % 2);
	system("pause");

}