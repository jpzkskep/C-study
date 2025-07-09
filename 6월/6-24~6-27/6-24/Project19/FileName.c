/*놀이공원 패스 등급 판별기*/
#include <stdio.h>
int main() {
	int age;
	float height;
	printf("나이와 키를 입력하세요:");
	scanf("%d %f", &age, &height);
	if (age >= 18 && height >= 160) {
		printf("당신은 성인 패스를 받을 수 있습니다.");
	}
	else if (age >= 12 && height >= 140) {
		printf("당신은 청소년 패스를 받을 수 있습니다.");
	}
	else if (age < 12 && height >= 130) {
		printf("당신은 어린이 패스를 받을 수 있습니다.");
	}
	else {
		printf("탑승 불가");
	}
	return 0;
}