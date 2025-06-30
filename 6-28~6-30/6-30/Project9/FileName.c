//Æ÷ÀÎÅÍ »¬¼À
#include <stdio.h>
int main() {
	int a;
	int* pa = &a;
	printf("paÀÇ °ª: %p \n", pa);
	printf("pa-1ÀÇ °ª: %p \n", pa - 1);
	return 0;
}