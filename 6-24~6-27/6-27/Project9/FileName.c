//사용자로부터 정수 1~3 중 하나를 입력받아
// 아래와 같은 메시지를 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main() {
	int input;
	printf("정수를 입력하시오 : ");
	scanf("%d", &input);
	switch (input) {
	case 1:
		printf("사과 \n");
		break;
	case 2:
		printf("바나나 \n");
		break;
	case 3:
		printf("포도 \n");
		break;
	default:
		printf("몰라요 \n");
		break;
	}
	return 0;
}