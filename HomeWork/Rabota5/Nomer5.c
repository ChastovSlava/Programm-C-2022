#include <math.h>
#include <locale.h>
#include <stdio.h>
int main() {
	setlocale(LC_ALL, "rus");
	float a, b , d;
	printf("������� 2 �����: ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	d = a + b;
	printf("����� �����: %f", d);
	system("pause");
	return 0;

}