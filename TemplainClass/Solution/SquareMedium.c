#include <locale.h>
#include <stdio.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int ab, bc, ca;
	float square, pr2;
	printf("������� ������� ������������\n");
	scanf_s("%d %d %d", &ab, &bc, &ca);
	pr2 = (ab + bc + ca)*0.5;
	if (ab > 0 && bc > 0 && ca > 0) {
		if (ab + bc >= ca && ab + ca >= ab && ca + bc >= ab) {
			square = sqrt(pr2 * (pr2 - ab) * (pr2 - bc) * (pr2 - ca));
			printf("���������: S= %2f", square);
		}else{
			printf("����������� �����, �����������\n");
		}
	} else{
		printf("������� ������ �������\n");
	}
	system("pause");
	return 0;
}