#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

#define PI (3.14) // M_PI

int main()
{
	double distance, degree;
	printf("�Ÿ��� �Է��Ͻÿ�:"); scanf_s(" %lf", &distance);
	printf("������ �Է��Ͻÿ�:"); scanf_s(" %lf", &degree);
	printf("������ �������� %f\n", (360. / degree) * distance / (2. * PI));

	return 0;
}