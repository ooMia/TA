#include <stdio.h>

int main() {

	double x, y; int result;
	printf("��ǥ(x y): "); scanf_s(" %lf %lf", &x, &y);

	if (x > 0 && y > 0) result = 1;
	else if (x > 0 && y < 0) result = 4;
	else if (x < 0 && y > 0) result = 2;
	else if (x < 0 && y < 0) result = 3;
	else result = 0;

	printf("%d��и�", result);

	return 0;
}