#include <stdio.h>
int main(void) {
	printf("문자1개를 입력하시오:");
	int input = getchar();
	if (input >= 97 && input <= 122) {	//입력이 소문자
		putchar(input-32);
	}
	else if (input >= 65 && input <= 90) {	//입력이 대문자
		putchar(input+32);
	}
	else {
		printf("입력 오류");
	}
	return 0;
}