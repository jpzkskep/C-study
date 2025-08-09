#include <stdio.h>
int main(void) {
	int input;
	int divided[100]={ 0 };
	int len = 0;
	int count = 0;
	int temp;
	printf("10진수 정수 입력:");
	scanf("%d", &input);
	for (;;) {
		if (input >= 2) {
			divided[count] = input % 2;
			count++;
			len++;
			input /= 2;
		}
		else {
			divided[count] = input;
			len++;
			break;
		}
	}
	for (int i = 0; i < len/2; i++) {
		temp = divided[i];
		divided[i] = divided[len - i-1];
		divided[len - i-1] = temp;
	}
	for (int i = 0; i < len; i++) {
		printf("%d", divided[i]);
	}
	return 0;
}