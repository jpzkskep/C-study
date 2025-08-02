#include <stdio.h>
int main(void) {
	int kor, eng, math;
	float avg;
	printf("학생의 국어,영어,수학의 점수를 입력하시오: ");
	scanf("%d %d %d", &kor, &eng, &math);
	avg = (float)(kor + eng + math) / 3;
	printf("%f", avg);
	if (avg >= 90) printf("A");
	else if (avg >= 80) printf("B");
	else if (avg >= 70) printf("C");
	else if (avg >= 50) printf("D");
	else printf("F");
	return 0;
}