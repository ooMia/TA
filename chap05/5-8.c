#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

#define PI (M_PI)

int main()
{
	double r;
	printf("���� �������� �Է��Ͻÿ�:"); scanf_s(" %lf", &r);
	printf("ǥ������ %f�Դϴ�.\n", 4. * PI * pow(r, 2.));
	printf("ü���� %f�Դϴ�.\n", 4. / 3. * PI * pow(r, 3.));
	
	return 0;
}