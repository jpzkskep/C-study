#include <stdio.h>
#define HIT_NUM 5
int main(void) {
#if HIT_NUM==5
	puts("����5�Դϴ�");
#else
	puts("����5�� �ƴմϴ�");
#endif
	return 0;
}