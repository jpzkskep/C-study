/*���� ���� �����ϴ� �ڿ��� a,b,c�� ���� ���ϱ�
1) a+b+c=2000
2) a>b>c, a,b,c�� ��� �ڿ���
*/
#include <stdio.h>
int main() {
	int a, b, c, number = 0;
	for (a = 1; a <= 1999; a++) {
		for (b = 1; b <= 1999; b++) {
			c = 2000 - a - b;
			if (a + b + c == 2000 && a > b && b > c) {
				number = number + 1;
			}
		}
	}
	printf("�������� �����ϴ� �ڿ��� a,b,c�� ���� : %d", number);
	return 0;
}