//����ȵ�
#include <stdio.h>
int change_val(int i) {
	i = 3;
	return 0;
}
int main() {
	int i = 0;
	printf("ȣ������ i�� ��: %d \n", i);
	change_val(i);
	printf("ȣ������ i�� ��: %d \n", i);
	return 0;
}