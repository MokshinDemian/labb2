#include <stdio.h>
#include <locale.h>
int chet(int a, int b)
{
	return (a % 2) != (b % 2);
}
void main() {
	setlocale(LC_ALL, ".UTF8");
	int a, b;
	puts("Введите числа...");
	scanf_s("%d %d", &a, &b);
	printf("%s\n", chet(a, b) ? "Налево" : "Направо");
	system("pause");
}
