#include <stdio.h>

int main()
{
	char month[][4] = { "","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };

	int m;
	printf("����ȣ�� �Է��Ͻÿ�:"); scanf_s(" %d", &m);
	printf("%s", month[m]);

	// �Ǵ� switch(m){ case 1: printf("Jan"); break; case 2: ... }

	return 0;
}