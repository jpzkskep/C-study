#include <stdio.h>
int main(void) {
	int kor, eng, math;
	float avg;
	printf("�л��� ����,����,������ ������ �Է��Ͻÿ�: ");
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