//�ζ��� �Լ� ����1
#include <stdio.h>
__inline int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
int main() {
	printf("3�� 2�� �ִ밪�� : %d", max(2, 3));
	return 0;
}