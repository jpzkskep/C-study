//1000000������ �Ǻ���ġ ������ ¦�� ���� �յ� ���ϱ�  //2��°,Ʋ��
#include <stdio.h>
int main() {
	int first=1, second=1, next, sum = 0;
	for (first = 1; second <= 1000000; first++) {
		next = first + second;
		first = second;
		second = next;
		sum = sum + second;
	}
	printf("1000000 ������ �Ǻ���ġ ������ ¦�� �׵��� �� : %d \n", sum);
	return 0;
}