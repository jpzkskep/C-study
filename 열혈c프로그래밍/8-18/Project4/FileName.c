#include <stdio.h>
struct employee {
	char name[50];
	int age;
};
int main(void) {
	struct employee arr[3];
	for (int i = 0; i < 3; i++) {
		printf("���%d�� ������ �Է��Ͻÿ�(�̸�,����):",i+1);
		scanf("%s %d", arr[i].name, &arr[i].age);
	}
	for (int i = 0; i < 3; i++) {
		printf("��� %d�� �̸�:%s ����:%d\n", i + 1, arr[i].name, arr[i].age);
	}
	return 0;
}