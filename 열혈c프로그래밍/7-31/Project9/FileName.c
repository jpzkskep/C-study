#include <stdio.h>
int main(void) {
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("���� ch�� ũ�� : %d\n", sizeof(ch));
	printf("���� inum�� ũ�� : %d\n", sizeof(inum));
	printf("���� dnum�� ũ�� : %d\n", sizeof(dnum));
	printf("charũ�� : %d\n", sizeof(char));
	printf("intũ�� : %d\n", sizeof(int));
	printf("longũ�� : %d\n", sizeof(long));
	printf("long longũ�� : %d\n", sizeof(long long));
	printf("floatũ�� : %d\n", sizeof(float));
	printf("doubleũ�� : %d\n", sizeof(double));
	return 0;
}