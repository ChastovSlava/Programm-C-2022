#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int mark1, mark2, mark3;
	printf("������� ���� ������: \n");
	scanf_s("%d %d %d", &mark1, &mark2, &mark3);
	printf("%d %d %d", mark1, mark2, mark3);
	if ((mark1= 4) & (mark2= 4) & (mark3= 4)) {
		printf("�� ��������!\n");
	}
	else {
		if ((mark1 = 4) && (mark2 = 4) && (mark3 = 4)) {
			printf("�� ��������!\n");
		}
		else {
			if ((mark1 = 3) && (mark2 = 3) && (mark3 = 3)) {
				printf("�� ��������!\n");
			}
		}
	}
	system("pause");
	return 0;
}
