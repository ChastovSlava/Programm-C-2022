#include <locale.h>
#include <stdio.h>
#include <windows.h>
int main() {

	setlocale(LC_ALL, "rus");

	printf("Введите дату: \n");

	char data;

	scanf_s("%c", data);

	sleep(3000);

	system("cls");

	printf("Введите время: \n");

	char time;

	scanf_s("%c", time);

	sleep(3000);

	system("cls");

	printf("Я запомню %c, %c." data, time);

	printf("Спасибо, до свидания!\n");

	system("pause");

	return 0;
}