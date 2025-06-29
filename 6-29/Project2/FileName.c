//입력받은 3명의 성적을 막대그래프로 나타내기
// *하나당 10점
#include <stdio.h>
int main() {
	int score[3];
	int graph;
	for (int i = 0; i < 3; i++) {
		printf("%d번째 학생의 성적은?:", i + 1);
		scanf("%d", &score[i]);
	}
	for (int k = 0; k < 3; k++) {
		graph = score[k] / 10;
		printf("학생%d: ", k + 1);
		for (int t = 0; t < graph; t++) {
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}