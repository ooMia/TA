#include <stdio.h>
int main()
{
    int x, y, z;
    printf("3���� ������ �Է��Ͻÿ�:"); scanf_s("%d %d %d", &x, &y, &z);
    printf("�ִ밪:%d", x > y ? (x > z ? x : z) : (y > z ? y : z));

    return 0;
}