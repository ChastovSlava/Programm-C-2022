#include <locale.h>
#include <stdio.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int chislo1, chislo2, res;
	float res2;
	printf("������� 2 �����\n");
	scanf_s("%d %d", &chislo1, &chislo2);
	if (chislo1 > chislo2) {
		if (chislo1>=-10 && chislo1<=10 && chislo2>-10 && chislo2<10) {
			res = chislo1 - chislo2;
			//printf("���������: %d\n", chislo1- chislo2);
		}
		if (chislo1<=-10 && chislo2<=-10) {
			res = chislo1 * chislo1 + chislo2 * chislo2;
			//printf("���������: %d\n", chislo1* chislo1 + chislo2*chislo2);
		}
		if (chislo1 >= 10 && chislo2 >= 10) {
			res2 = sqrt(chislo1) + sqrt(chislo2);
			//printf("���������: %2f\n",sqrt(chislo1) + sqrt(chislo2));
		}
		if (chislo1 = -10 && chislo2 = -10 && chislo1 = 10 && chislo2 = 10) {
			printf("������ �� ����������\n");
		}
	}
	printf("���������: %d\n", res);
	system("pause");
	return 0;
}