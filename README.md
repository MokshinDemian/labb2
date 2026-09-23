
# Домашнее задание к работе 2 
## Условие задачи 
Составьте программу для определения сдачи после покупки в магазине товара: перчаток стоимостью А руб., портфеля стоимостью Б руб., галстука стоимостью С руб. Исходная сумма, выделенная на покупку – Д руб. В случае нехватки денег сдача получится отрицательной. 

## 1. Алгоритм и блок-схема   
Алгоритм  
1. Начало    
2. Объявить константы:  
&nbsp;&nbsp;&nbsp;ryk = 1000  
     &nbsp;&nbsp;&nbsp;gals = 100  
     &nbsp;&nbsp;&nbsp;glov = 300  
3. Задать исходные данные:  
    &nbsp;&nbsp;&nbsp;d = исходная сумма  
4. Вычислить сдачу:    
    &nbsp;&nbsp;&nbsp;total = d - (ryk + gals + glov)  
5. Вывести результаты расчетов с подстановкой всех значений в текст.  
6. Конец  
<img width="297" height="713" alt="image" src="https://github.com/user-attachments/assets/b12d2729-240c-46ab-a8e2-e06a62e243f7" />



## 2. Реализация программы  
#include <stdio.h>  
#include <locale.h>  
int main() {  
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;setlocale(LC_ALL, ".UTF8");  
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int glov = 300; // стоимость перчаток   
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int ryk = 1000; // стоимость рюкзака   
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int c = 100; // стоимость галстука  
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;int d = 2000; // общая    
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;printf("Сдача: %d", d - (ryk + gals + glov));    
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;return 0;  
}  
## 3. Результаты работы программы  
Сдача: 600  

## 4. Информация о разработчике  
Мокшин Демьян бОТИ-262  
