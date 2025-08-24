#include <stdio.h>
#define num 7
int main(void) {
#if num==5
	puts("현재5");
#elif num==6
	puts("현재6");
#elif num==7
	puts("현재7");
#else 
	puts("5,6,7은 확실히 아님");
#endif
	return 0;
}