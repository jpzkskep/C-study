#include <stdio.h>
#define HIT_NUM 5
int main(void) {
#if HIT_NUM==5
	puts("현재5입니다");
#else
	puts("현재5가 아닙니다");
#endif
	return 0;
}