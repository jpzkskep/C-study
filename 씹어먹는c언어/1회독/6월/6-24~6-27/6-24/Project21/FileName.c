//장학금 특례 및 특례 전형 판별 프로그램
#include <stdio.h>
int main() {
	float grade;
	int hour;
	char award;
	char license;
	int income;
	char sport;
	printf("내신 평균 점수,봉사시간,수상 경력(Y/N),외국어 자격증(Y/N),소득분위(1~10),체육 특기자 여부(Y/N)를 입력하세요:");
	scanf("%f %d %c %c %d %c", &grade, &hour, &award, &license, &income, &sport);
	if (sport == 'Y') {
		if ((grade >= 70)&&(((grade>=95 && award=='Y') || ((income>=1 && income<=3) && (grade>=85)) || (license=='Y' && hour>=50)))) {
			printf("장학금 대상 + 특례 전형 대상");
		}
		else {
			printf("특례 전형 대상");
		}
	}
	else {
		if ((grade >= 95 && award == 'Y') || ((income >= 1 && income <= 3) && (grade >= 85)) || (license == 'Y' && hour >= 50)) {
			printf("장학금 대상");
		}
		else {
			printf("일반 전형 지원 가능");
		}
	}
	return 0;
}