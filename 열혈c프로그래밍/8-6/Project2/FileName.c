/*����8
2�� n���� ���ϴ� �Լ��� ��������� ǥ��
*/
#include <stdio.h>
int town(int top);
int main(void) {
	int n,result;
	printf("n�Է�:");
	scanf("%d", &n);
	result = town(n);
	printf("2�� %d���� %d", n, result);
	return 0;
}
int town(int top) {
	if (top < 1) {
		return 1;
	}
	else {
		return 2 * town(top - 1);
	}
}