#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int mark1, mark2, mark3;
	printf("������� ���� ������ �� 3 ��������: \n");
	scanf_s("%d %d %d", &mark1, &mark2, &mark3);
	if ((mark1 <= 5) & (mark2 <= 5) & (mark3 <= 5) & (mark1 != 1) & (mark2 != 1) & (mark3 != 1) & (mark1 != 0) & (mark2 != 0) & (mark3 != 0) & (mark1 >= -1) & (mark2 >= -1) & (mark3 >= -1)) {
		if ((mark1 == 5) & (mark2 == 5) & (mark3 == 5)) {
			printf("�� ��������!\n");
		}
		else {
			if ((mark1 >= 4) && (mark2 >= 4) && (mark3 >= 4)) {
				printf("�� ��������!\n");
			}
			else {
				if ((mark1 >= 3) && (mark2 >= 3) && (mark3 >= 3)) {
					printf("�� ��������!\n");
				}
				else {
					if ((mark1 = 2) && (mark2 = 2) && (mark3 = 2) && (mark1 = -1) && (mark2 = -1) && (mark3 = -1)) {
						printf("��� �� �����!\n");
					}
				}
			}
		}
	}
	else {
		printf("�� ������ ������ ������!\n");
	}
	system("pause");
	return 0;
}
