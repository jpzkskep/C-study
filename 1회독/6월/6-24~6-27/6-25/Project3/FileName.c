//for문 응용
#include <stdio.h>
int main() {
	int i;
	int subject, score;
	double sum_score=0;
	printf("몇 개의 과목 점수를 입력 받을 것인가요?");
	scanf("%d", &subject);
	printf("\n 각 과목의 점수를 입력해 주세요 \n");
	for (i = 1; i <= subject; i++) {
		printf("과목 %d: ", i);
		scanf("%d", &score);
		sum_score = sum_score + score;
	}
	printf("전체 과목의 평균은 : %.2f", sum_score / subject);
	return 0;
}