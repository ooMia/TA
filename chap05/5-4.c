#include <stdio.h>
int main(void)
{
	int cm, feet;
	double inch;

	printf("Ű�� �Է��Ͻÿ�(cm):"); scanf_s("%d", &cm);
	inch = cm / 2.54;
	feet = inch / 12;
	inch = inch - feet * 12;
	printf("%dcm�� %d��Ʈ %f��ġ�Դϴ�.", cm, feet, inch);

	return 0;

}