#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
	char input1[50];
	char input2[50];
	char name1[50], name2[50];
	char age1[50], age2[50];
	int where1=0, where2=0;

	fputs("사람1의 이름과 나이를 입력하시오:", stdout);
	fgets(input1, sizeof(input1), stdin);
	int len1 = strlen(input1);

	fputs("사람2의 이름과 나이를 입력하시오:", stdout);
	fgets(input2, sizeof(input2), stdin);
	int len2 = strlen(input2);

	for (int i = 0; i < len1; i++) {
		if (input1[i] == ' ') {
			where1 = i;
			break;
		}
	}

	for (int i = 0; i < len2; i++) {
		if (input2[i] == ' ') {
			where2 = i;
			break;
		}
	}

	for (int i = 0; i < where1; i++) {
		name1[i] = input1[i];
	}
	name1[where1] = 0;

	for (int i = 0; i < where2; i++) {
		name2[i] = input2[i];
	}
	name2[where2] = 0;

	for (int i = 0; i < len1; i++) {
		if (input1[i] >= 0 && input1[i] <= 9) {
			age1[i] = input1[i];
		}
	}

	for (int i = 0; i < len2; i++) {
		if (input2[i] >= 0 && input2[i] <= 9) {
			age2[i] = input2[i];
		}
	}

	

	printf("%s %s\n", name1,age1);
	printf("%s %s", name2,age2);
}