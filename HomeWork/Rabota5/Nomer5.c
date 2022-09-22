#include <math.h>
#include <locale.h>
#include <stdio.h>
int main() {
	setlocale(LC_ALL, "rus");
	float a, b , d;
	printf("¬ведите 2 числа: ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	d = a + b;
	printf("—умма чисел: %f", d);
	system("pause");
	return 0;

}