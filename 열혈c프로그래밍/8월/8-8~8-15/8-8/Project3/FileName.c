//�迭�� ��� ��ҵ��� 1�� ����
#include <stdio.h>
int main(void) {
	int arr[5] = { 1,2,3,4,5 };
	int sum = 0;
	int* ptr = &arr[4];
	for (int i = 0; i < 5; i++) {
		*(ptr--) -= 1;
		printf("arr[%d]=%d\n", 4 - i, arr[4 - i]);
	}
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	printf("�հ�:%d", sum);
}