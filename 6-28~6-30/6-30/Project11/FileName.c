//�������� ����
#include <stdio.h>
int main() {
	int a;
	int* pa = &a;
	int* pb;
	*pa = 3;
	pb = pa;
	printf("pa�� ����Ű�� �ִ� �� %d \n", *pa);
	printf("pb�� ����Ű�� �ִ� �� %d \n", *pb);
	return 0;
}