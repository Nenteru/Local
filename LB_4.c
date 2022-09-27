#include <stdio.h>
#include <locale.h>

void main() {
	char c = '!', c1;
	int i = 2, i1, i1c;
	float f = 3.14f, f1;
	double d = 5e-12, d1;
	setlocale(LC_ALL, "RUS");
	printf("Первый набор: \n%c\n%d\n%f\n%g\n", c, i, f, d);
	printf("Введите значения для второго набора\n");
	scanf("%c%d%f%le", &c1, &i1, &f1, &d1);
	printf("Второй набор: \n%c\n%d\n%f\n%.le\n\n", c1, i1, f1, d1);
	
	puts("Задача 1а");
	printf("Целая часть %d\nДробная часть %f\n\n", (int)f1, f1 - (int)f1);
	
	puts("Задача 1б");
	printf("Шестнадцатиричный код = %x\n", c1);
	printf("Десятичый код = %d\n\n", c1);

	puts("Задача 1с");
	printf("%f\n\n", 1/(float)c1);

	puts("Задание 2");

	int a = 11, b = 3, x = a/b;
	float y = a/b;
	double z = a/b;
	printf("Значение x = %d\nЗначение y = %f\nЗначение z = %lf\n", x, y, z);
	puts("Задание 2.6");
	printf("Значение float = %f\n", (float)(a / b));
	printf("Значение double = %lf\n\n", (double)(a / b));

	puts("Задание 3");
	int n;
	printf("Введите трёхзначное число\n");
	scanf("%d", &n);
	printf("Последняя цифра %d, первая цифра %d, сумма цифр %d\n\n", n % 10, n / 100, n / 10 % 10 + n % 10 + n / 100);
}