#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    
    do {
        printf("100���� ���� �ڿ����� �Է��Ͻÿ�:"); scanf_s(" %d", &x);
        if (x >= 100 || x < 0) system("cls");
    } while (x >= 100 || x < 0);
    printf("���� �ڸ�:%d\n���� �ڸ�:%d", x / 10, x % 10);

    return 0;
}