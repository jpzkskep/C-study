#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	srand((int)time(NULL));
	int input;
	int win = 0, same = 0;
	int computer_choice;
	for (;;) {
		printf("������ 1,������ 2,���� 3:");
		scanf("%d", &input);
		computer_choice = rand() % 3 + 1;
		if (input == 1 && computer_choice == 1) {
			printf("����� ��������,��ǻ�ʹ� ��������,�����ϴ�!\n");
			same++;
		}
		else if (input == 1 && computer_choice == 2) {
			printf("����� ��������,��ǻ�ʹ� ��������,�̰���ϴ�!\n");
			win++;
		}
		else if (input == 1 && computer_choice == 3) {
			printf("����� ��������,��ǻ�ʹ� ������,�����ϴ�!\n");
			printf("������ ��� : %d�� %d��", win, same);
			break;
		}
		else if (input == 2 && computer_choice == 1) {
			printf("����� ��������,��ǻ�ʹ� ��������,�����ϴ�!\n");
			printf("������ ��� : %d�� %d��", win, same);
			break;
		}
		else if (input == 2 && computer_choice == 2) {
			printf("����� ��������,��ǻ�ʹ� ��������,�����ϴ�!\n");
			same++;
		}
		else if (input == 2 && computer_choice == 3) {
			printf("����� ��������,��ǻ�ʹ� ������,�̰���ϴ�!\n");
			win++;
		}
		else if (input == 3 && computer_choice == 1) {
			printf("����� ������,��ǻ�ʹ� ��������,�̰���ϴ�!\n");
			win++;
		}
		else if (input == 3 && computer_choice == 2) {
			printf("����� ������,��ǻ�ʹ� ��������,�����ϴ�!\n");
			printf("������ ��� : %d�� %d��", win, same);
			break;
		}
		else if (input == 3 && computer_choice == 3) {
			printf("����� ������,��ǻ�ʹ� ������,�����ϴ�!\n");
			same++;
		}
		else {
			printf("�Է¿���\n");
		}
	}
	return 0;
}