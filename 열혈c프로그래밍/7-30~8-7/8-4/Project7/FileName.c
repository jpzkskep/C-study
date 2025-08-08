//����3
//�μ��� �ִ������� ���ϴ� ���α׷�
/*
#include <stdio.h>
int gcd(int num1, int num2);
int main(void) {
	int num1, num2;
	printf("�� ���� �Է��Ͻÿ�:");
	scanf("%d %d", &num1, &num2);
	printf("�μ��� �ִ�����:%d", gcd(num1, num2));
	return 0;
}
int gcd(int num1, int num2) {
	int min = num1;
	int maxdivide = 1;
	if (num2 < min) min = num2;
	for (int i = 2; i <= min; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			maxdivide = i;
		}
	}
	return maxdivide;
}
*/
#include <stdio.h>
int gcd(int num1, int num2);
int main(void) {
	int num1, num2;
	printf("�� ���� �Է��Ͻÿ�:");
	scanf("%d %d", &num1, &num2);
	printf("�μ��� �ִ�����:%d", gcd(num1, num2));
	return 0;
}
int gcd(int num1, int num2) {
	int temp;
	int small = num1, big = num2;
	if (num2 < num1) small = num2, big = num1;
	while (small != 0) {
		temp = big % small;
		big = small;
		small = temp;
	}
	return big;
}