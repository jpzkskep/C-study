//길이가 최대 100인 문자열을 하나 입력받아 역순으로 출력
//복습
/*
#include <stdio.h>

int back(char* input);

int main() {
	char input[100];
	printf("문자열 입력 : ");
	scanf("%s", input);
	back(input);
}

int back(char* input) {
	int num = 0;
	while (input[num] != '\0') {
		num++;
	}
	for (num=num-1; num >= 0; num--) {
		printf("%c", input[num]);
	}
	return 0;
}
*/

//길이가 최대 100인 문자열을 입력받아 소문자는 대문자로
//대문자는 소문자로 출력하는 함수
/*
#include <stdio.h>

int change(char* inputs);

int main() {
	char input[100];
	printf("문자열 입력 : ");
	scanf("%s", input);
	change(input);
	return 0;
}

int change(char* inputs) {
	int len = 0;
	while (inputs[len] != '\0') {
		if (inputs[len] >= 'A' && inputs[len] <= 'Z') {
			inputs[len] = inputs[len] + 32;  // 대문자 → 소문자
		}
		else if (inputs[len] >= 'a' && inputs[len] <= 'z') {
			inputs[len] = inputs[len] - 32;  // 소문자 → 대문자
		}
		len++;
	}

	printf("변환된 문자열 : %s\n", inputs);
	return 1;
}
*/

//두개의 문자열을 입력받아 같으면 같다
//다르면 다르다 라고 출력하는 함수
/*
#include <stdio.h>

int ornot(char* input1, char* input2);

int main() {
	int result;
	char input1[100], input2[100];
	printf("문자열 1을 입력 : ");
	scanf("%s", input1);
	printf("\n");
	printf("문자열 2을 입력 : ");
	scanf("%s", input2);
	result=ornot(input1, input2);
	if (result == 1) {
		printf("다르다");
	}
	else if (result == 0) {
		printf("같다");
	}
	return 0;
}

int ornot(char* input1, char* input2) {
	int len = 0;
	while (input1[len] != '\0' && input2[len] != '\0') {
		if (input1[len] != input2[len]) {
			return 1;
		}
		len++;
	}
	if (input1[len] != input2[len]) {
		return 1;
	}
	return 0;
}
*/

//문자열 2개를 입력받아 먼저 입력받은 문자열에서 나중에 입력받은
//문자열의 위치를 검색하는 함수
//없다면 -1리턴 있다면 그 위치를 리턴
#include <stdio.h>

int where(char* inputs1, char* inputs2);

int main() {
	char input1[100], input2[100];
	printf("1번째 문자열 : ");
	scanf("%s", input1);
	printf("2번째 문자열 : ");
	scanf("%s", input2);

	int index = where(input1, input2);
	if (index == -1) {
		printf("부분 문자열이 없습니다.\n");
	}
	else {
		printf("부분 문자열 위치 : %d\n", index);
	}

	return 0;
}

int where(char* inputs1, char* inputs2) {
	int i, j;

	// i는 inputs1을 따라가며, j는 inputs2를 따라감
	for (i = 0; inputs1[i] != '\0'; i++) {
		// 현재 위치부터 inputs2가 일치하는지 확인
		for (j = 0; inputs2[j] != '\0'; j++) {
			if (inputs1[i + j] != inputs2[j]) {
				break;  // 일치하지 않으면 중단
			}
		}

		if (inputs2[j] == '\0') {
			return i;  // 끝까지 다 일치했으면 i 리턴
		}
	}

	return -1;  // 못 찾았으면 -1 리턴
}
