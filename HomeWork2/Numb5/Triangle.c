#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int side_A, side_B, side_C, A, B, C;
	printf("������� ������� ������������:\n");
	scanf_s("%d %d %d", &side_A, &side_B, &side_C);
	A = pow(side_A, 2);
	B = pow(side_B, 2);
	C = pow(side_C, 2);
	if ((side_A + side_B)> side_C && (side_A + side_C) > side_B && (side_C + side_B) > side_A) {
		if (side_A == side_B == side_C) {
			printf("����������� ��������������\n");
		}
		else{
			if ((side_A == side_B) && (side_A == side_C) && (side_C == side_B)) {
				printf("����������� ��������������\n");
			}
			else {
				if ((A == B+C) && (B == A+C) && (C == A+B)) {
					printf("����������� �������������\n");
				}
				else {
					printf("����������� ������������\n");
				}
			}
		}
	}
	else {
		printf("�� �������� �������������\n");
	}
	system("pause");
	return 0;
}