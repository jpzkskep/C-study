//1000000������ �Ǻ���ġ ���� �� ¦���׵��� �� ���ϱ�
#include <stdio.h> 
int main() {
	int first=1, second=1, next, sum = 0;
	while (second <= 1000000) {
		if (second % 2 == 0) {
			sum = sum + second;
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("1000000������ �Ǻ���ġ ���� ¦�� �׵��� ����: %d \n", sum);
	return 0;
}