#include <stdio.h>
int main(void) {
	int count, score[100],sum=0;
	float average;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%d", &score[i]);
		sum += score[i];
	}
	average = (float)sum / count;
	printf("%f", average);
	return 0;
}