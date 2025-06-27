//놀이기구 탑승 가능 여부
#include <stdio.h>
int main() {
	int age;
	float height;
	printf("나이와 키를 차례대로 입력하세요:");
	scanf("%d %f", &age, &height);
	if (age >= 12 && height >= 140.0) {
		printf("탑승 가능");
	}
	else {
		printf("탑승 불가");
	}
}