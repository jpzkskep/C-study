#include <stdio.h>	//�̿Ϸ�
int main(void) {
	int n;	//n�� 50����
	int num[51][51];
	printf("���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		num[0][i] = i+1;
	}

}