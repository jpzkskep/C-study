//����ڷκ��� n���� �Է� �ް� 1���� n������ ���� ���  //�ɸ��ð� 4��
#include <stdio.h>
int main() {
	int a=1,n,sum=1;
	printf("n�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	for (a = 1; a <= n; a++) {
		sum = sum * a;
	}
	printf("1���� n������ ���� : %d ",sum);
	return 0;
}