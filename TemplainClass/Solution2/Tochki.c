#include <locale.h>
#include <stdio.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	printf("������� 2 ����� ������������� ������� [-10; 10]\n");
	scanf_s("%d %d", &a, &b);
	if (a >= -10 && a <= 10 && b >= -10 && b <= 10) {
		if (a < b) {
			printf("����� ������� ab: %d\n", abs(b) - abs(a));
		}
		else {
			printf("����� � ������ ���� ����� ����� b\n");
		}
	}
	else {
		printf("���� ��� ��� 2 ����� �� ����������� ������� [-10; 10]\n");
	}
	system("pause");
	return 0;
}