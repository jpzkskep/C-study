//구조체
#include <stdio.h>
struct Human {
	int age;
	int height;
	int weight;
};
int main() {
	struct Human illka;
	illka.age = 99;
	illka.height = 170;
	illka.weight = 70;
	printf("illka에대한정보\n");
	printf("나이:%d\n", illka.age);
	printf("키:%d\n", illka.height);
	printf("몸무게:%d\n", illka.weight);
	return 0;
}