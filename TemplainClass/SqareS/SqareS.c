#include <locale.h>
#include <stdio.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int d , sh;
	scanf_s("%d", &d);
	scanf_s("%d", &sh);
	printf("Площадь= %d\n", d*sh);
}