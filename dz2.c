#include <stdio.h>
#include <locale.h>
int main() {
         setlocale(LC_ALL, ".UTF8");
         int glov = 300; // стоимость перчаток
         int ryk = 1000; // стоимость рюкзака
         int gals = 100; // стоимость галстука
         int d = 2000; // общая
         printf("Сдача: %d", d - (ryk + gals + glov));
         return 0;
}
