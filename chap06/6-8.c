#include <stdio.h>

int main()
{
	int time, age, charge;
	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����):"); scanf_s(" %d %d", &time, &age);

	if (17 <= time) { charge = 10000; }
	else if ((3 <= age && age <= 12) || 65 <= age) charge = 25000;
	else charge = 34000;

	printf("����� %d�Դϴ�.", charge);

	return 0;
}