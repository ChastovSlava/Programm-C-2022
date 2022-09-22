#include <locale.h>
#include <stdio.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	printf("Введите 2 точки принадлежащие отрезку [-10; 10]\n");
	scanf_s("%d %d", &a, &b);
	if (a >= -10 && a <= 10 && b >= -10 && b <= 10) {
		if (a < b) {
			printf("Длина отрезка ab: %d\n", abs(b) - abs(a));
		}
		else {
			printf("Точка а должна быть левее точки b\n");
		}
	}
	else {
		printf("Одна или все 2 точки не принадлежит отрезку [-10; 10]\n");
	}
	system("pause");
	return 0;
}