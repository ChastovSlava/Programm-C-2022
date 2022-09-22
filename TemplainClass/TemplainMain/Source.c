#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int x = 5;
	printf("Привет\n");
	printf();
	system("pause");
	return 0;


}