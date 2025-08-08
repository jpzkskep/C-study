#include <stdio.h>
int main(void) {
	int input;
	int hour, min, sec;
	printf("초를 입력하시오:");
	scanf("%d", &input);
	sec = input % 60;
	min = (input % 3600) / 60;
	hour = input / 3600;
	printf("%d시 %d분 %d초", hour, min, sec);
	return 0;
}