/*���� ũ�� ��*/
#include <stdio.h>
int main() {
	float first;
	float second;
	printf("���� 2���� �Է��Ͻÿ�:");
	scanf("%f %f", &first, &second);
	if (first > second) {
		printf("ù ��° ���� �� Ů�ϴ�.");
	}
	else if (first < second) {
		printf("�� ��° ���� �� Ů�ϴ�.");
	}
	else if (first == second) {
		printf("�� ���� �����ϴ�.");
	}
	return 0;
}