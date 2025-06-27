//학점 판별기
#include <stdio.h>
int main() {
	int grade;
	printf("점수를 입력하시오(0-100):");
	scanf("%d", &grade);
	if (grade >= 90) {
		printf("A학점");
	}
	else if (grade >= 80) {
		printf("B학점");
	}
	else if (grade >= 70) {
		printf("C학점");
	}
	else if (grade >= 60) {
		printf("D학점");
	}
	else {
		printf("F학점");
	}
}