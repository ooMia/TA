#include <stdio.h>

int main() {
	
	double x, result;
	printf("x�� ���� �Է��Ͻÿ�:"); scanf_s(" %lf", &x);
	
	if (x <= 0) result = x * x - 9 * x + 2;
	else result = 7 * x + 2;
	
	printf("f(x)�� ���� %f", result);	

	return 0;
}