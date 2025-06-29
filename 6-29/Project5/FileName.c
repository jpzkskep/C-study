//5명의 학생 점수를 입력받아 평균을 구하고, 
// 평균 이상인 학생의 점수만 출력하는 프로그램을 작성
#include <stdio.h>
int main() {
	int score[5];
	float average;
	int sum=0;
	for (int i = 0; i < 5; i++) {
		printf("%d번째 학생 점수 : ", i + 1);
		scanf("%d", &score[i]);
		sum = sum + score[i];
	}
	average = (float)sum / 5;
	printf("평균 : %.2f \n", average);
	printf("평균 이상인 점수 : ");
	for (int i = 0; i < 5; i++) {
		if (score[i] >= average) {
			printf("%d ", score[i]);
		}
	}
	return 0;
}