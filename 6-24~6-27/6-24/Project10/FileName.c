//점수 if문
#include <stdio.h>
int main() {
	float ave_score;
	float math, english, science, programming;
	printf("수학,영어,과학,컴프 점수를 각각 입력해주세요:");
	scanf("%f %f %f %f", &math, &english, &science, &programming);
	ave_score = (math + english + science + programming) / 4;	//4과목의 평균
	printf("당신의 점수는 %f입니다. \n", ave_score);
	if (ave_score >= 90) {
		printf("당신은 우등생 입니다. \n");
	}
	else if (ave_score >= 30) {
		printf("조금만 노력하세요. \n");
	}
	else {
		printf("공부를 발로 합니까? \n");
	}
	return 0;
}