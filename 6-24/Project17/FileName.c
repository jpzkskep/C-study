//���̱ⱸ ž�� ���� ����
#include <stdio.h>
int main() {
	int age;
	float height;
	printf("���̿� Ű�� ���ʴ�� �Է��ϼ���:");
	scanf("%d %f", &age, &height);
	if (age >= 12 && height >= 140.0) {
		printf("ž�� ����");
	}
	else {
		printf("ž�� �Ұ�");
	}
}