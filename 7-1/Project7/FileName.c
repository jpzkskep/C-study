//sizeof�̿�
#include <stdio.h>
int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };
	printf("��ü ũ�� : %d \n", sizeof(arr));
	printf("�� ���� ���� : %d \n", sizeof(arr[0]) / sizeof(arr[0][0]));
	printf("�� ���� ���� : %d \n", sizeof(arr) / sizeof(arr[0]));
	return 0;
}