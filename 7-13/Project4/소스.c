//2�Ŀ� �迭 ���� �Ҵ��� Ȱ��
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
	int i, j, input, sum = 0;
	int subject, students;
	int** arr;
	//arr[subject][students]�迭
	printf("�����:");
	scanf("%d", &subject);
	printf("�л��� ��:");
	scanf("%d", &students);
	arr = (int**)malloc(sizeof(int*) * subject);
	for (i = 0; i < subject; i++) {
		arr[i] = (int*)malloc(sizeof(int) * students);
	}
	for (i = 0; i < subject; i++) {
		printf("����%d ���� ------\n",i);
		for (j = 0; j < students; j++) {
			printf("�л�%d ���� �Է� : ", j);
			scanf("%d", &input);
			arr[i][j] = input;
		}
	}
	for (i = 0; i < subject; i++) {
		sum = 0;
		for (j = 0; j < students; j++) {
			sum += arr[i][j];
		}
		printf("����%d ������� : %d \n", i, sum / students);
	}
	for (i = 0; i < subject; i++) {
		free(arr[i]);
	}
	free(arr);
	return 0;
}