//구조체의 도입
#include <stdio.h>
struct Human {
	int age;
	int height;
	int weight;
};	// ;붙이는것 주의
int main() {
	struct Human Lee;
	Lee.age = 99;
	Lee.height = 185;
	Lee.weight = 80;
	printf("Lee에 대한 정보 \n");
	printf("나이 : %d \n", Lee.age);
	printf("키 : %d \n", Lee.height);
	printf("몸무게 : %d \n", Lee.weight);
	return 0;
}