//project24 �����ٲ�
#include <stdio.h>
int main() {
	int arr[2][3] = { {10,20,30},{40,50,60} };
	int (*p)[3] = arr;
	printf("ù��° ���� ����° �� %d \n", *(*(p + 0) + 2));
	printf("�ι�° ���� ù��° �� %d \n", *(*(p + 1) + 0));
	return 0;
}