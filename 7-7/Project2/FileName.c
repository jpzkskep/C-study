//��Ŭ���� ȣ������ �̿��ؼ� n���� ������ �ִ� ������� ���ϴ� �Լ� �����
#include <stdio.h>
int main() {
	int m,n,number,next,result;
	printf("��� ������ �ִ����� : ");
	scanf("%d", &number);
	printf("�� 2���� �Է��Ͻÿ� : ");
	scanf("%d %d", &m, &n);
	result=eculid(m, n);
	printf("\n");
	for (int i = 0; i < number-2; i++) {
		printf("�������� �Է��Ͻÿ� :");
		scanf("%d", &next);
		result=eculid(result, next);
	}
	printf("%d", result);
	return 0;
}
int eculid(int first, int second) {
	int parr;
	for (;;) {
		if (first % second == 0) {
			return second;
			break;
		}
		else {
			if (second > first%second) {
				parr = first % second;
				first = second;
				second = parr;
			}
		}
	}
	return 0;
}