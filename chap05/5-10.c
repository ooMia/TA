#include <stdio.h>

int main() {

	double x, y;
	printf("x ��ǥ�� �Է��Ͻÿ�: "); scanf_s(" %lf", &x);
	printf("y ��ǥ�� �Է��Ͻÿ�: "); scanf_s(" %lf", &y);

	(x > 0)
		? (y > 0 ? printf("1��и�") : printf("4��и�"))
		: (y > 0 ? printf("2��и�") : printf("3��и�"));

	return 0;
}

