/*
문제: 직원 정보 입력 및 출력
설명:
직원의 이름, 사번, 월급을 저장하는 구조체를 정의하고,
직원 3명의 정보를 입력받아 출력하시오.

요구사항:
구조체 이름: Employee

멤버:
name (문자열, 최대 20자)
emp_id (정수)
salary (정수)

조건:
직원 3명의 정보를 입력받고, 입력한 순서대로 출력하시오.
*/
#include <stdio.h>
struct Employee {
	char name[20];
	int emp_id;
	int salary;
};
int main() {
	struct Employee t[3];
	for (int i = 0; i < 3; i++) {
		printf("직원%d의 이름을 입력하시오 : ",i+1);
		scanf("%s", t[i].name);
		printf("\n");
		printf("직원%d의 사번을 입력하시오 : ",i+1);
		scanf("%d", &t[i].emp_id);
		printf("\n");
		printf("직원%d의 월급을 입력하시오 : ",i+1);
		scanf("%d", &t[i].salary);
		printf("\n");
	}
	printf("----------------------------------------------");
	printf("\n");
	for (int i = 0; i < 3; i++) {
		printf("직원 %d의 이름,사번,월급 %s %d %d", i + 1, t[i].name, t[i].emp_id, t[i].salary);
		printf("\n");
	}
	return 0;
}