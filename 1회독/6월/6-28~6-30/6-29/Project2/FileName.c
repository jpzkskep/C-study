//�Է¹��� 3���� ������ ����׷����� ��Ÿ����
// *�ϳ��� 10��
#include <stdio.h>
int main() {
	int score[3];
	int graph;
	for (int i = 0; i < 3; i++) {
		printf("%d��° �л��� ������?:", i + 1);
		scanf("%d", &score[i]);
	}
	for (int k = 0; k < 3; k++) {
		graph = score[k] / 10;
		printf("�л�%d: ", k + 1);
		for (int t = 0; t < graph; t++) {
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}