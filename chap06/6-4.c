#include <stdio.h>
#include <stdlib.h> // srand, rand
#include <time.h>	// time

int main() {

	// INITIALIZE
	srand((unsigned)time(NULL));
	int user, computer = rand() % 3 + 1;
	char type[][5] = { "","����","����","��" };

	// INPUT
	do {
		printf("�����Ͻÿ�(1:����, 2:����, 3:��) "); scanf_s(" %d", &user);
		if (user > 3 || user <= 0) system("cls");
	} while (user > 3 || user <= 0);

	// OUTPUT
	printf("�����: %s, ��ǻ��: %s\n", type[user], type[computer]);

	if (user == computer) printf("�����");
	else if ((user == 1 && computer == 3) || (user > computer)) printf("����ڰ� �̰���");
	else printf("����ڰ� ����");

	return 0;
}