#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	int SizeOfArray;
	int* arr;
	printf("����� ���� �迭�� ������ �� : ");
	scanf("%d", &SizeOfArray);
	arr = (int*)malloc(sizeof(int) * SizeOfArray);
	//int arr[SizeOfArray]�� ������ �۾��� �� ũ���� �迭 ����
	free(arr);
	return 0;
}