/*���̰��� �н� ��� �Ǻ���*/
#include <stdio.h>
int main() {
	int age;
	float height;
	printf("���̿� Ű�� �Է��ϼ���:");
	scanf("%d %f", &age, &height);
	if (age >= 18 && height >= 160) {
		printf("����� ���� �н��� ���� �� �ֽ��ϴ�.");
	}
	else if (age >= 12 && height >= 140) {
		printf("����� û�ҳ� �н��� ���� �� �ֽ��ϴ�.");
	}
	else if (age < 12 && height >= 130) {
		printf("����� ��� �н��� ���� �� �ֽ��ϴ�.");
	}
	else {
		printf("ž�� �Ұ�");
	}
	return 0;
}