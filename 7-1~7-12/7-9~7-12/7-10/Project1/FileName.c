//����ü�� ����
#include <stdio.h>
struct Human {
	int age;
	int height;
	int weight;
};	// ;���̴°� ����
int main() {
	struct Human Lee;
	Lee.age = 99;
	Lee.height = 185;
	Lee.weight = 80;
	printf("Lee�� ���� ���� \n");
	printf("���� : %d \n", Lee.age);
	printf("Ű : %d \n", Lee.height);
	printf("������ : %d \n", Lee.weight);
	return 0;
}