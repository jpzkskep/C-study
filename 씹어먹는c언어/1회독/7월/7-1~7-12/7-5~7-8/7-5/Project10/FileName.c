//�����Ͱ� ����Ű�� ������ ���� �ٲ۴�
#include <stdio.h>
int pswap(int** ppa, int** ppb);
int main() {
	int a, b;
	int* pa, * pb;
	pa = &a;
	pb = &b;
	printf("pa�� ����Ű�� ������ �ּҰ� : %p \n", pa);
	printf("pa�� �ּҰ� : %p \n", &pa);
	printf("pb�� ����Ű�� ������ �ּҰ� : %p \n", pb);
	printf("pb�� �ּҰ� : %p \n", &pb);
	printf("----------ȣ��---------- \n");
	pswap(&pa, &pb);
	printf("----------ȣ�ⳡ---------- \n");
	printf("pa�� ����Ű�� ������ �ּҰ� : %p \n", pa);
	printf("pa�� �ּҰ� : %p \n", &pa);
	printf("pb�� ����Ű�� ������ �ּҰ� : %p \n", pb);
	printf("pb�� �ּҰ� : %p \n", &pb);
	return 0;
}
int pswap(int** ppa, int** ppb) {
	int* temp = *ppa;
	printf("ppa�� ����Ű�� ������ �ּҰ� : %p \n", ppa);
	printf("ppb�� ����Ű�� ������ �ּҰ� : %p \n", ppb);
	*ppa = *ppb;
	*ppb = temp;
	return 0;
}