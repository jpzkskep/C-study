#include <stdio.h>
int main() {
	char name[20];
	float kor;
	float math;
	float eng;
	float average;
	printf("이름을 입력하세요:");
	scanf("%s", name);
	printf("국어 점수 : ");
	scanf("%f", &kor);
	printf("수학 점수 : ");
	scanf("%f", &math);
	printf("영어 점수 : ");
	scanf("%f", &eng);
	average = (kor + math + eng) / 3;
	printf("%s님의 평균 점수는 %.6f입니다. \n", name, average);
	return 0;
}
