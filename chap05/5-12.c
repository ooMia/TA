#include <stdio.h>
int main()
{
	unsigned int result = 0;
	char a;
	printf("ù��° ���ڸ� �Է��Ͻÿ�: "); scanf_s(" %c", &a, 1); result = result | (a << 0);
	printf("�ι�° ���ڸ� �Է��Ͻÿ�: "); scanf_s(" %c", &a, 1); result = result | (a << 8);
	printf("����° ���ڸ� �Է��Ͻÿ�: "); scanf_s(" %c", &a, 1); result = result | (a << 16);
	printf("�׹�° ���ڸ� �Է��Ͻÿ�: "); scanf_s(" %c", &a, 1); result = result | (a << 24);

	return 0;
}