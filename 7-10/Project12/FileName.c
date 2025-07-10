/*
학생의 이름, 학번, 평균 점수를 저장하는 구조체를 정의하고, 
학생 3명의 정보를 입력받아 출력하시오.

요구사항:

구조체 이름: Student

멤버: name(문자열), id(정수), avg(실수)

학생 3명의 정보를 입력받아 출력
*/

//틀림
#include <stdio.h>

struct Student {
	char name[20];   // 문자열은 배열로 선언
	int id;
	float avg;
};

int main() {
	struct Student t[3];

	// 입력
	for (int i = 0; i < 3; i++) {
		printf("학생 %d의 이름을 적으시오 : ", i + 1);
		scanf("%s", t[i].name);  // 문자열 입력

		printf("학생 %d의 id를 적으시오 : ", i + 1);
		scanf("%d", &t[i].id);   // 정수 입력

		printf("학생 %d의 평균점수를 적으시오 : ", i + 1);
		scanf("%f", &t[i].avg);  // 실수 입력
	}

	// 출력
	printf("\n입력된 학생 정보:\n");
	for (int i = 0; i < 3; i++) {
		printf("학생 %d : 이름=%s, ID=%d, 평균=%.2f\n", i + 1, t[i].name, t[i].id, t[i].avg);
	}

	return 0;
}
