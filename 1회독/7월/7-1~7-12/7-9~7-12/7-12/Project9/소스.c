//���ڸ� ������ �����Լ�
#include <stdio.h>
int main(int argc, char** argv) {
	int i;
	printf("���� ������ ���� : %d \n", argc);
	for (i = 0; i < argc; i++) {
		printf("�� ���α׷��� ���� ���� : %s \n", argv[i]);
	}
	return 0;
}