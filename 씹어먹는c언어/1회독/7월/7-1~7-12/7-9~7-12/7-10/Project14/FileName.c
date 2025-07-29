/*
설명:
직원의 이름, 사번, 월급을 구조체에 저장한 뒤,
직원 5명의 정보를 입력받고, 그 중에서 월급이 가장 높은 직원의 이름과 월급을 출력하시오.

요구사항
구조체 이름: Employee
멤버:
name (문자열)
emp_id (정수)
salary (정수)
직원 5명의 정보를 입력받는다.

그중 월급이 가장 높은 직원 한 명의 이름과 월급을 출력한다.
*/

//틀림
#include <stdio.h>

struct Employee {
	char name[20];
	int emp_id;
	int salary;
};

int highest(struct Employee e[], int count);

int main() {
	struct Employee e[5];

	for (int i = 0; i < 5; i++) {
		printf("직원%d의 이름을 입력하시오 : ", i + 1);
		scanf("%s", e[i].name);

		printf("직원%d의 사번을 입력하시오 : ", i + 1);
		scanf("%d", &e[i].emp_id);

		printf("직원%d의 월급을 입력하시오 : ", i + 1);
		scanf("%d", &e[i].salary);
	}

	int max_index = highest(e, 5);

	printf("\n월급이 가장 높은 직원은 %s이고, 월급은 %d원입니다.\n", e[max_index].name, e[max_index].salary);

	return 0;
}

// 최고 월급 받는 사람의 인덱스를 반환
int highest(struct Employee e[], int count) {
	int max_index = 0;
	for (int i = 1; i < count; i++) {
		if (e[i].salary > e[max_index].salary) {
			max_index = i;
		}
	}
	return max_index;
}