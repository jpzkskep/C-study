//평범한 문장
#include <stdio.h>
#include "str.h"
int main() {
	char str1[20];
	char str2[20];
	scanf("%s", str1);
	scanf("%s", str2);
	if (compare(str1, str2)) {
		printf("%s 와 %s는 같은 문장입니다 \n", str1, str2);
	}
	else {
		printf("%s 와 %s는 다른 문장입니다 \n", str1, str2);
	}
	return 0;
}
