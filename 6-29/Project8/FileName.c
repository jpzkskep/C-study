/*
학생 성적 통계 프로그램
학교에서 3명의 학생이 있고, 각 학생은 4개의 과목(국어, 영어, 수학, 과학)을 본다. 
사용자로부터 각 학생의 성적을 입력받아 다음을 출력하시오:
각 학생의 총점과 평균
과목별 최고 점수와 최저 점수
전체 평균 이상인 점수만 출력
각 학생의 평균이 90점 이상이면 "A", 80점 이상이면 "B", 
70점 이상이면 "C", 나머지는 "F"로 등급을 출력하시오.
*/
#include <stdio.h>
int main() {
	int score[3][4];
	int total[3] = { 0 };
	float ave[3];
	int sum = 0;
	float average;
	int i, j;
	char result;
	int top, low;
	for (i = 0; i < 3; i++) {
		printf("%d번 학생 : ", i + 1);
		for (j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
			total[i] += score[i][j];
		}
	}
	sum = total[0] + total[1] + total[2];
	for (i = 0; i < 3; i++) {
		ave[i] = (float)total[i] / 4;
		if (ave[i] >= 90) {
			result = 'A';
		}
		else if (ave[i] >= 80) {
			result = 'B';
		}
		else if (ave[i] >= 70) {
			result = 'C';
		}
		else {
			result = 'F';
		}

		printf("[%d] 총점: %d, 평균: %.2f → 등급: %c\n", i + 1, total[i], ave[i], result);
	}
	printf("\n[과목별 최고 점수]\n");
	for (j = 0; j < 4; j++) {
		top = score[0][j];
		for (i = 1; i < 3; i++) {
			if (score[i][j] > top) {
				top = score[i][j];
			}
		}
		printf("과목 %d: %d\n", j + 1, top);
	}
	printf("\n[과목별 최저 점수]\n");
	for (j = 0; j < 4; j++) {
		low = score[0][j];
		for (i = 1; i < 3; i++) {
			if (score[i][j] < low) {
				low = score[i][j];
			}
		}
		printf("과목 %d: %d\n", j + 1, low);
	}
	average = (float)sum / 12;
	printf("\n[전체 평균 이상 점수 (%.2f 이상)]\n", average);
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			if (score[i][j] >= average) {
				printf("%d ", score[i][j]);
			}
		}
	}
	printf("\n");
	return 0;
}