#include <locale.h>
#include <stdio.h>
#include <windows.h>
int main() {

	setlocale(LC_ALL, "rus");

	printf("������� ����: \n");

	char data;

	scanf_s("%c", data);

	sleep(3000);

	system("cls");

	printf("������� �����: \n");

	char time;

	scanf_s("%c", time);

	sleep(3000);

	system("cls");

	printf("� ������� %c, %c." data, time);

	printf("�������, �� ��������!\n");

	system("pause");

	return 0;
}