#include <stdio.h>

int main()
{
	int height, age;
	printf("Ű�� �Է��Ͻÿ�:"); scanf_s(" %d", &height);
	printf("���̸� �Է��Ͻÿ�:"); scanf_s(" %d", &age);

	if ((height >= 140) && (age >= 10)) printf("Ÿ�� �����ϴ�.");
	else printf("�˼��մϴ�.");

	return 0;
}