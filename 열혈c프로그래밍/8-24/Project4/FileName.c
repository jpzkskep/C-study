#include <stdio.h>
#define num 7
int main(void) {
#if num==5
	puts("����5");
#elif num==6
	puts("����6");
#elif num==7
	puts("����7");
#else 
	puts("5,6,7�� Ȯ���� �ƴ�");
#endif
	return 0;
}