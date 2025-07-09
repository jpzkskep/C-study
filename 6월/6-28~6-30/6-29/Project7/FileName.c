//학생 성적 분석 프로그램
/*
2명의 학생, 각 학생은 3과목의 점수를 입력받는다.
아래 정보를 출력하시오:

각 학생의 총점과 평균

과목별(국어, 영어, 수학) 최고 점수

전체 평균 이상인 점수만 출력

*/
#include <stdio.h>
int main() {
	int score[2][3];
	float average;
	int sum = 0, sum1 = 0, sum2 = 0;
	int max;
	int i = 0, j = 0;
	for (i = 0; i < 2; i++) {
		printf("%d번 학생:", i + 1);
		for (j = 0; j < 3; j++) {
			scanf(" %d", &score[i][j]);
			if (i == 0) {
				sum1 = sum1 + score[i][j];
			}
			else {
				sum2 = sum2 + score[i][j];
			}
		}
	}
	sum = sum1 + sum2;
	average = (float)sum / 6;
	printf("1번 학생 총점 : %d, 평균 : %.2f \n", sum1, (float)sum1 / 3);
	printf("2번 학생 총점 : %d, 평균 : %.2f \n", sum2, (float)sum2 / 3);
	printf("과목별 최고점 (국/영/수) : ");
	for (j = 0; j < 3; j++) {
		max = score[0][j];
		if (score[1][j] >= max) {
			max = score[1][j];
		}
		printf("%d ", max);
	}
	printf("\n");
	printf("전체 평균 : %.2f \n", average);
	printf("전체 평균 이상 점수:");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			if (score[i][j] >= average) {
				printf(" %d", score[i][j]);
			}
		}
	}
}