#include <math.h>
#include <locale.h>
#include <stdio.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a;
	printf("������� ������� ����: ");
	scanf_s("%d", &a);
	printf("���� ����: %d\n", a*a*a);
	printf("������� ����������� ����: %d\n", 6*a*a);
	printf("������� ������� �����������: %d\n", a*a);
	system("pause");
	return 0;

}