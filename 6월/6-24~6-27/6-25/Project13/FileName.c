//1000������ 3�Ǵ� 5�� ����� �ڿ������� �� ���ϱ�
#include <stdio.h>
int main() {
	int a, sum = 0;
	for (a = 1; a <= 1000; a++) {
		if (a % 3 == 0 || a % 5 == 0) {
			sum = sum + a;
		}
	}
	printf("1���� 1000������ 3�Ǵ� 5�� ����� �ڿ������� ���� %d", sum);
	return 0;
}