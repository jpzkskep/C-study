//if문 시작
#include <stdio.h>
int main() {
	int i;
	printf("입력하고 싶은 숫자를 입력하세요! : ");
	scanf("%d", &i);
	if (i == 7) {
		printf("당신은 행운의 숫자 7을 입력했습니다");
	}
	return 0;
}