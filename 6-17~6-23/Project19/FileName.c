#include <stdio.h>
int main() {
	float kg;
	float height;
	char name[20];
	printf("이름을 입력하세요:");
	scanf("%s", name);
	printf("몸무게(kg):");
	scanf("%f", &kg);
	printf("키(m):");
	scanf("%f", &height);
	printf("%s님의 BMI는 %f입니다.", name, kg / (height * height));
}