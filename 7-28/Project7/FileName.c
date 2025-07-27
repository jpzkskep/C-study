//구조체 안의 구조체
#include <stdio.h>
struct employee {
	int age;
	int salary;
};
struct company {
	struct employee data;
	char name[10];
};
int main() {
	struct company lee;
	lee.data.age = 31;
	lee.data.salary = 300000;
	printf("나이:%d", lee.data.age);
	printf("소득:%d", lee.data.salary);
	return 0;
}