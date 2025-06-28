/*
임의의 실수에서 소수점 이하 두자리수만 추출하여 정수형 변수에 대입
예를들어 입력받은 실수 f가 12.3456이면 34만 추출
반올림은 고려하지 않음
*/
//문제의 핵심은 음수이거나 소수점 이하의 자리수가 없는 경우까지 고려하는것
#include <stdio.h>
int main() {
	int i;
	float f;
	printf("실수를 입력하시오 : ");
	scanf("%f", &f);
	i = (int)(f*100)-(int)f*100;
	if (i < 0) {
		i = -i;
	}
	printf("i=%d \n", i);
	return 0;
}