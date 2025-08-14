#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	int user1, user2, user3;
	int com1, com2, com3;
	int strikenum1=0, strikenum2=0, strikenum3=0;	//기본으로 stirke안침
	int strike, ball;
	int many = 0;
	printf("Start Game!\n");
	srand((int)time(NULL));
	for (;;) {
		strike = 0;
		ball = 0;
		strikenum1 = 0;
		strikenum2 = 0;
		strikenum3 = 0;
		printf("3개의 숫자 선택:");
		scanf("%d %d %d", &user1, &user2, &user3);
		com1 = rand() % 10;
		com2 = rand() % 10;
		if (com2 == com1) {
			while (com2 != com1) {
				com2 = rand() % 10;
			}
		}
		com3 = rand() % 10;
		if (com3 == com1 || com3 == com2) {
			while (com3 != com1 && com3 != com2) {
				com3 = rand() % 10;
			}
		}
		if (user1 == com1) {
			strikenum1 = 1;
			strike++;

		}
		if (user2 == com2) {
			strikenum2 = 1;
			strike++;
		}
		if (user3 == com3) {
			strikenum3 = 1;
			strike++;
		}
		if ((user1 == com2 || user1 == com3) && (strikenum1!=1) && (strikenum2!=1) && (strikenum3 != 1)) {
			ball++;
		}
		if ((user2 == com1 || user2 == com3) && (strikenum1 != 1) && (strikenum2 != 1) && (strikenum3 != 1)) {
			ball++;
		}
		if ((user3 == com1 || user3 == com2) && (strikenum1 != 1) && (strikenum2 != 1) && (strikenum3 != 1)) {
			ball++;
		}
		printf("컴퓨터가 선택한 숫자 %d %d %d\n", com1, com2, com3);
		printf("%d번째 도전 결과:%dstrike, %dball!!\n", many, strike, ball);
		many++;
		if (strike == 3) break;
	}
	return 0;
}