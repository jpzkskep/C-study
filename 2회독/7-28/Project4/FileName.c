//����ü
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
	printf("illka����������\n");
	printf("����:%d\n", illka.age);
	printf("Ű:%d\n", illka.height);
	printf("������:%d\n", illka.weight);
	return 0;
}