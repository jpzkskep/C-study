/* ����ڷκ��� 3������ �Է¹޾� ���� ����� �����ϴ� ���α׷��� �ۼ�
1. ���� 1��
2. ������ 1�� (+,-,*,/,!)
3.���� 1�� (�� ! �����ڴ� �ι�° ���ڸ� �Է¹��� ����
*/
#include <stdio.h>
int main() {
	int first, second,i,result=0;
	char operator;
	printf("ù ��° ���� �Է� : ");
	scanf(" %d", &first);
	printf("������ �Է� (+ - * / !): ");
	scanf(" %c", &operator);
	if (operator=='!') {
		if (first < 0) {
			printf("������ ���丮���� ����� �� �����ϴ�");
		}
		else {
			result = 1;
			for (i = 1; i <= first; i++) {
				result = result * i;
			}
			printf("%d! = %d", first, result);
		}
	}
	else {
		printf("�� ��° ���� �Է� : ");
		scanf(" %d", &second);
		switch (operator) {
		case '+':
			result = first + second;
			printf("���: %d+%d=%d", first, second, result);
			break;
		case '-':
			result = first - second;
			printf("���: %d-%d=%d", first, second, result);
			break;
		case '*':
			result = first * second;
			printf("���: %d*%d=%d", first, second, result);
			break;
		case '/':
			if (second == 0) {
				printf("0���� ���� �� �����ϴ�");
				break;
			}
			else {
				result = first / second;
				printf("���: %d/%d=%d", first, second, result);
				break;
			}
		default:
			printf("�������� �ʴ� �������Դϴ�");
		}
	}
	return 0;
}