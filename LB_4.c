#include <stdio.h>
#include <locale.h>

void main() {
	char c = '!', c1;
	int i = 2, i1, i1c;
	float f = 3.14f, f1;
	double d = 5e-12, d1;
	setlocale(LC_ALL, "RUS");
	printf("������ �����: \n%c\n%d\n%f\n%g\n", c, i, f, d);
	printf("������� �������� ��� ������� ������\n");
	scanf("%c%d%f%le", &c1, &i1, &f1, &d1);
	printf("������ �����: \n%c\n%d\n%f\n%.le\n\n", c1, i1, f1, d1);
	
	puts("������ 1�");
	printf("����� ����� %d\n������� ����� %f\n\n", (int)f1, f1 - (int)f1);
	
	puts("������ 1�");
	printf("����������������� ��� = %x\n", c1);
	printf("��������� ��� = %d\n\n", c1);

	puts("������ 1�");
	printf("%f\n\n", 1/(float)c1);

	puts("������� 2");

	int a = 11, b = 3, x = a/b;
	float y = a/b;
	double z = a/b;
	printf("�������� x = %d\n�������� y = %f\n�������� z = %lf\n", x, y, z);
	puts("������� 2.6");
	printf("�������� float = %f\n", (float)(a / b));
	printf("�������� double = %lf\n\n", (double)(a / b));

	puts("������� 3");
	int n;
	printf("������� ���������� �����\n");
	scanf("%d", &n);
	printf("��������� ����� %d, ������ ����� %d, ����� ���� %d\n\n", n % 10, n / 100, n / 10 % 10 + n % 10 + n / 100);
}