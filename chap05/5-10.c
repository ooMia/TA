#include <stdio.h>

int main() {

	double x, y;
	printf("x 좌표를 입력하시오: "); scanf_s(" %lf", &x);
	printf("y 좌표를 입력하시오: "); scanf_s(" %lf", &y);

	(x > 0)
		? (y > 0 ? printf("1사분면") : printf("4사분면"))
		: (y > 0 ? printf("2사분면") : printf("3사분면"));

	return 0;
}

