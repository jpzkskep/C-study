#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	srand((int)time(NULL));
	int input;
	int win = 0, same = 0;
	int computer_choice;
	for (;;) {
		printf("바위는 1,가위는 2,보는 3:");
		scanf("%d", &input);
		computer_choice = rand() % 3 + 1;
		if (input == 1 && computer_choice == 1) {
			printf("당신은 바위선택,컴퓨터는 바위선택,비겼습니다!\n");
			same++;
		}
		else if (input == 1 && computer_choice == 2) {
			printf("당신은 바위선택,컴퓨터는 가위선택,이겼습니다!\n");
			win++;
		}
		else if (input == 1 && computer_choice == 3) {
			printf("당신은 바위선택,컴퓨터는 보선택,졌습니다!\n");
			printf("게임의 결과 : %d승 %d무", win, same);
			break;
		}
		else if (input == 2 && computer_choice == 1) {
			printf("당신은 가위선택,컴퓨터는 바위선택,졌습니다!\n");
			printf("게임의 결과 : %d승 %d무", win, same);
			break;
		}
		else if (input == 2 && computer_choice == 2) {
			printf("당신은 가위선택,컴퓨터는 가위선택,비겼습니다!\n");
			same++;
		}
		else if (input == 2 && computer_choice == 3) {
			printf("당신은 가위선택,컴퓨터는 보선택,이겼습니다!\n");
			win++;
		}
		else if (input == 3 && computer_choice == 1) {
			printf("당신은 보선택,컴퓨터는 바위선택,이겼습니다!\n");
			win++;
		}
		else if (input == 3 && computer_choice == 2) {
			printf("당신은 보선택,컴퓨터는 가위선택,졌습니다!\n");
			printf("게임의 결과 : %d승 %d무", win, same);
			break;
		}
		else if (input == 3 && computer_choice == 3) {
			printf("당신은 보선택,컴퓨터는 보선택,비겼습니다!\n");
			same++;
		}
		else {
			printf("입력오류\n");
		}
	}
	return 0;
}