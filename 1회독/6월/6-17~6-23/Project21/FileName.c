#include <stdio.h>
int main() {
	float width;
	float length;
	float area;
	float round;
	printf("가로 길이를 입력하세요:");
	scanf("%f", &width);
	printf("세로 길이를 입력하세요:");
	scanf("%f", &length);
	area = width * length;
	round = 2 * width + 2 * length;
	printf("직사각형의 넓이는 %.6f 입니다. \n", area);
	printf("직사각형의 둘레는 %.6f 입니다. \n", round);
	return 0;
}