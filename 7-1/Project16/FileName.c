/*
������ �迭 arr[5] = { 10, 20, 30, 40, 50 } �� �����ϰ�,
������ ptr�� ����Ͽ� ���� ������ �����ϴ� �ڵ带 �ۼ��Ͻÿ�.

1. ptr�� arr�� ����Ų��.
2. ptr�� �̿��ؼ� arr[0], arr[1], arr[2]�� ���� ���ʴ�� ����Ѵ�. (������ ���� ���)
3. ptr + 3�� ����Ű�� ���� ����Ͻÿ�.
4. ptr�� 2 ������Ų ��, �� ��ġ�� ����Ű�� ���� ����Ͻÿ�.
*/
#include <stdio.h>
int main() {
	int arr[5] = { 10,20,30,40,50 };
	int* ptr = arr;
	printf("arr[0] = %d \n", *ptr);
	printf("arr[1] = %d \n", *(ptr + 1));
	printf("arr[2] = %d \n", *(ptr + 2));
	printf("ptr + 3 = %d \n", *(ptr+3));
	ptr = ptr + 2;
	printf("ptr + 2 = %d \n", *ptr);
	return 0;
}
