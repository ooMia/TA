#include <stdio.h>

int main()
{
	double weight, height;
	printf("Ű�� ü���� �Է��ϼ���:"); scanf_s(" %lf %lf", &height, &weight);
	double standard = (height - 100) * 0.9;

	if (weight == standard) printf("ǥ�� ");
	else if (weight < standard) printf("��");
	else printf("��"); printf("ü���Դϴ�.");

	return 0;
}