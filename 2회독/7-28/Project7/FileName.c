//����ü ���� ����ü
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
	printf("����:%d", lee.data.age);
	printf("�ҵ�:%d", lee.data.salary);
	return 0;
}