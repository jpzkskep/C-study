//1���� n������ ��
#include <stdio.h>
int sum_toN(int first,int second) {
	int sum = 0;
	for (first; first < second+1; first++) {
		sum += first;
	}
	return sum;
}
int main() {
	int number;
	printf("n�� �Է��ϼ��� : ");
	scanf("%d", &number);
	printf("1���� %d������ ���� : %d", number, sum_toN(1, number));
	return 0;
}