/*논리 부정*/
#include <stdio.h>
int main() {
	int height, weight;
	printf("당신의 키와 몸무게를 각각 입력해 주세요: ");
	scanf("%d %d", &height, &weight);
	if (height >= 190 || weight >= 100) {
		printf("당신은 거구 입니다. \n");
	}
	if (!(height >= 190 || weight >= 100)) {
		printf("당신은 거구가 아닙니다. \n");
	}
	return 0;
}