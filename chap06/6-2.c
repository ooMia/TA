#include <stdio.h>

int main()
{
	int x, y;
	printf("������ �Է��Ͻÿ�:"); scanf_s(" %d", &x);
	printf("������ �Է��Ͻÿ�:"); scanf_s(" %d", &y);
	printf("���%s", (x % y == 0) ? "�Դϴ�." : "�� �ƴմϴ�.");

	return 0;
}