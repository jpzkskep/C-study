//����8
//2�� n���� ���ϴ� ����� ���α׷�
#include <stdio.h>
int find(int top);
int main(void) {
	int n,answer;
	printf("�����Է�:");
	scanf("%d", &n);
	answer=find(n);
	printf("2�� %d���� %d", n, answer);
	return 0;
}
int find(int top) {
	int result = 1;
	while (top != 0) {
		result = result * 2;
		top--;
		find(result);
		return result;
	}
}