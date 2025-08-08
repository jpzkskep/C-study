//도전6(틀림)
//사용자로부터 초를 입력받고 시,분,초 형태로 출력
#include <stdio.h>
int main(void) {
	int input;
	int hour, min, sec;
	printf("초(second)입력:");
	scanf("%d", &input);
	sec = input % 60;
	if (input / 360 < 360) {
		min = input % 60;
	}
	else min = input % 360;
	if (input % 3600 < 3600) {
		hour = input / 3600;
	}
	else hour = input / 3600;
	printf("%d시 %d분 %d초",hour,min, sec);
}