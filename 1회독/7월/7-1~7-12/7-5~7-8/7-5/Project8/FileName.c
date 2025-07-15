//c가 숫자인지 아닌지 판별
#include <stdio.h>
int isdigit(char c);
int main() {
	char input;
	scanf("%c", &input);
	if (isdigit(input)) {
		printf("%c는 숫자 입니다 \n", input);
	}
	else {
		printf("%c는 숫자가 아닙니다 \n", input);
	}
	return 0;
}
int isdigit(char c) {
	if (48 <= c && c <= 57) {	//아스키 코드 48-57이 숫자
		return 1;
	}
	else {
		return 0;
	}
}