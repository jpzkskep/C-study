#include <stdio.h>
int main(void) {
	int input[5];
	int max, min, sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("%d��° ������ �Է��Ͻÿ�:",i+1);
		scanf("%d", &input[i]);
	}
	max = input[0];
	min = input[0];
	for (int i = 0; i < 5; i++) {
		sum += input[i];
		if (input[i] > max) max = input[i];
		if (input[i] < min) min = input[i];
	}
	printf("�ִ�:%d\n", max);
	printf("�ּڰ�:%d\n", min);
	printf("�հ�:%d", sum);
	return 0;
}