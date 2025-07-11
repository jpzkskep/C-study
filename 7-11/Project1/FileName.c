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
	struct company Kim;
	Kim.data.age = 31;
	Kim.data.salary = 300000;
	printf("kim's age : %d \n", Kim.data.age);
	printf("kim's salary : %d$/year \n", Kim.data.salary);
	return 0;
}