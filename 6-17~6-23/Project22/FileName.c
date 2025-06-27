//초(sec)를 시,분,초로 바꾸기
#include <stdio.h>
int main() {
	int sec;	//입력된 초
	int hour;
	int min;
	int sec1;	//계산된 초
	printf("초를 입력하세요:");
	scanf("%d", &sec);
	hour = sec / 3600;
	min = (sec % 3600) / 60;
	sec1 = (sec % 3600) % 60;
	printf("%d초는 %d시간 %d분 %d초 입니다. \n",sec,hour,min,sec1);
	return 0;
}