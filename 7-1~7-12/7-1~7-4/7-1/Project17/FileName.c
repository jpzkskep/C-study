/*
1. ������ �迭 arr[5] = { 1, 2, 3, 4, 5 } �� �����϶�.
2. ������ ptr�� arr�� �ʱ�ȭ�϶�.

���� ������ �����ϴ� �ڵ带 �ۼ��Ͻÿ�.

3. ������ ptr�� �̿��� �ݺ��� ���� arr[0]���� arr[4]������ ���� ���� ����϶�.
   (��, �迭 �ε��� [] ��� ����, �ݵ�� ptr�� *ptr�� ����� ��)

4. arr[i]�� *(arr + i)�� ����� ������ 3�� ���ø� ���� ������� �����϶�.
5. ptr[i]�� *(ptr + i)�� ����� ������ ������� �����϶�.
*/
#include <stdio.h>
int main() {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	printf("arr[0] = %d \n", *ptr);
	printf("arr[1] = %d \n", *(ptr + 1));
	printf("arr[2] = %d \n", *(ptr + 2));
	printf("arr[3] = %d \n", *(ptr + 3));
	printf("arr[4] = %d \n", *(ptr + 4));
	printf("arr[2] = %d, *(arr + 2) = %d \n", arr[2], *(arr + 2));
	printf("ptr[3] = %d, *(ptr + 3) = %d \n", ptr[3], *(ptr + 3));
	printf("ptr[4] = %d, *(ptr + 4) = %d \n", ptr[4], *(ptr + 4));
}