/*
* ������ �迭 arr[3] = {1, 2, 3}�� �����Ѵ�.
���� �� ������ ���� printf�� ����Ͻÿ�:
arr
&arr
&arr[0]
�� ����, ������ 1�� ���� �ּҵ� ����Ͻÿ�:
arr + 1
&arr + 1
&arr[0] + 1
*/
#include <stdio.h>
int main() {
	int arr[3] = { 1,2,3 };
	printf("arr : %p \n", arr);
	printf("&arr : %p \n", &arr);
	printf("&arr[0] : %p \n", &arr[0]);
	printf("\n");
	printf("arr+1 : %p \n", arr + 1);
	printf("&arr+1 : %p \n", &arr + 1);
	printf("&arr[0]+1 : %p \n", &arr[0] + 1);
	return 0;
	// arr�� arr+1�� int���̱� ������ 4����Ʈ ���̳�
	//&arr�� &arr+1�� 4*3=12 ����Ʈ ���̳�
	//&arr[0]�� &arr[0]+1�� 4����Ʈ ���̳�
}