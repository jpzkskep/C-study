//숫자 10개를 입력받고 그 원소를 큰순으로 출력하는 함수 만들기   틀림
#include <stdio.h>
// 배열을 내림차순으로 정렬하는 함수 (int를 리턴하지만 실제론 의미 없음)
int sort_desc(int* arr, int size) {
	int i, j;
	for (i = 0; i < size - 1; i++) {
		for (j = i + 1; j < size; j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return 0; // 정렬만 하고 결과는 배열에 반영됨
}

int main() {
	int input[10];
	int i;

	printf("10개의 정수를 입력하시오: ");
	for (i = 0; i < 10; i++) {
		scanf("%d", &input[i]);
	}

	sort_desc(input, 10); // 정렬 실행

	printf("큰 순서대로 출력: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", input[i]);
	}
	return 0;
}