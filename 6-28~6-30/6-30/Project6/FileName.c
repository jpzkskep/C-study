//��� ������?
#include <stdio.h>
int main() {
	int a;
	int b;
	const int* const pa = &a;
	*pa = 3;	//Ʋ��
	pa = &b;	//Ʋ��
	return 0;
}