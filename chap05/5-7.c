#include <stdio.h>
int main()
{
	int x, y;
	printf("������ �Է��Ͻÿ�:"); scanf_s(" %d", &x);
	printf("2�� ���ϰ� ���� Ƚ��:"); scanf_s(" %d", &y);
	printf("%d<<%d�� ��: %d", x, y, x << y);

	return 0;
}