#include <stdio.h>
int main(void) {
	int num;
	printf("자연수 입력: ");
	scanf("%d", &num);
	if (num == 1) goto ONE;
	else if (num == 2) goto TWO;
	else goto OTHER;
ONE:
	printf("1입력됨\n");
	goto END;
TWO:
	printf("2입력됨\n");
	goto END;
OTHER:
	printf("3혹은 다른값 입력됨\n");
	goto END;
END:
	return 0;
}