#include <stdio.h>

int main()
{
	printf("���ڸ� �Է��Ͻÿ�:"); char c = getchar();
	
	switch (c)
	{
	case 'a': case 'e':	case 'i': case 'o': case 'u':
		printf("�����Դϴ�."); break;
	default:
		printf("�����Դϴ�."); break;
	}

	return 0;
}