#include <stdio.h>

int main() {

	double BC, AC, AE;

	printf("�������� ���̸� �Է��Ͻÿ� :"); scanf_s(" %lf", &BC);
	printf("������ �׸����� ���̸� �Է��Ͻÿ� :"); scanf_s(" %lf", &AC);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ� :"); scanf_s(" %lf", &AE);
	printf("�Ƕ�̵��� ���̴�% f�Դϴ�.", AE * BC / AC);
	
	return 0;
}

