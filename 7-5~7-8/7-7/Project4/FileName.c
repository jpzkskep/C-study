/*
���� ����� 1������ + 2������ - 3������ *
4������ / (�Ҽ��� ����) 5������ ����
����� ������ �Լ� ���
*/
#include <stdio.h>
int add(int first, int second);
int minus(int first, int second);
int mul(int first, int second);
int div(int first, int second);
int main() {
	int first, second,use,next,result;
	printf("2���� ���� �Է��ϼ��� : ");
	scanf("%d %d", &first, &second);
	for (;;) {
		printf("����� �Է��Ͻÿ�(1,2,3,4,5) :");
		scanf("%d", &use);
		if (use == 1) {
			printf("%d", add(first, second));
			result = add(first, second);
		}
		else if (use == 2) {
			printf("%d", minus(first, second));
			result = minus(first, second);
		}
		else if (use == 3) {
			printf("%d", mul(first, second));
			result = mul(first, second);
		}
		else if (use == 4) {
			printf("%d", div(first, second));
			result = div(first, second);
		}
		else if (use == 5) {
			printf("�����");
			return 0;
		}
		else {
			printf("�Է¿���");
			return 0;
		}
		printf("\n");
		printf("���� ���ڸ� �Է��Ͻÿ� : ");
		scanf("%d", &next);
		first = result;
		second = next;
	}
}
int add(int first, int second) {
	int result;
	result = first + second;
	return result;
}
int minus(int first, int second) {
	int result;
	result = first - second;
	return result;
}
int mul(int first, int second) {
	int result;
	result = first * second;
	return result;
}
int div(int first, int second) {
	int result;
	result = first / second;
	return result;
}