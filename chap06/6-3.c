#include <stdio.h>

int main()
{
	int x, y, z, min;
	printf("3���� ������ �Է��Ͻÿ�:"); scanf_s(" %d %d %d", &x, &y, &z);

	if (x < y) {
		if (x < z) min = x;
		else min = z;
	}
	else if (y < z) min = y;
	else min = z;

	printf("���� ���� ������ %d�Դϴ�.", min);

	return 0;
}