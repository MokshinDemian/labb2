#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, ".UTF8");
	float a, b;
	scanf_s("%g  %g", &a, &b);
	printf("______________________\n");
	printf("| %-5g | %-5g | %-5g | \n",a*b,a+b,a-b);
	printf("---------------------- \n");

}