#include <stdio.h>
int main() {
	float kg;
	float height;
	char name[20];
	printf("�̸��� �Է��ϼ���:");
	scanf("%s", name);
	printf("������(kg):");
	scanf("%f", &kg);
	printf("Ű(m):");
	scanf("%f", &height);
	printf("%s���� BMI�� %f�Դϴ�.", name, kg / (height * height));
}