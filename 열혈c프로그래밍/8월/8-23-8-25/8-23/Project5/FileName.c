#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int idx = 0;
	int now = 5;
	int* input = (int*)malloc(sizeof(int) * now);
	for (;;) {
		printf("정수입력:");
		scanf("%d", &input[idx]);
		if (input[idx] == -1) {
			break;
		}
		if (now == idx + 1) {
			now += 3;
			input = (int*)realloc(input, sizeof(int) * now);
		}
		idx++;
	}
	for (int i = 0; i < idx; i++) {
		printf("%d", input[i]);
	}
	free(input);
	return 0;
}