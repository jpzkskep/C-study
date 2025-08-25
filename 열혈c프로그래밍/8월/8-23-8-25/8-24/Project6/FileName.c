#include <stdio.h>
// #define num(y,s,p) ysp
// #define num(y,s,p) y s p
#define num(y,s,p) ((y)*100000+(s)*1000+(p))
int main(void) {
	printf("학번:%d\n", num(10, 65, 165));
	printf("학번:%d\n", num(10, 65, 075));
	return 0;
}