//null
#include <stdio.h>
int main() {
	char null_1 = '\0';
	char null_2 = 0;
	char null_3 = (char)NULL;
	char not_null = '0';
	printf("NULL������(�ƽ�Ű)�� : %d %d %d \n", null_1, null_2, null_3);
	printf("'0'�� ����(�ƽ�Ű)�� : %d \n", not_null);
	return 0;
}