//��� ������
#include <stdio.h>
int main() {
	int x = 100, y = 200;
	const int* p1 = &x;
	int* const p2 = &y;
	const int* const p3 = &x;
	printf("*p1= %d \n", *p1);
	p1 = &y;
	printf("*p1= %d \n",*p1);
	*p1 = 1000;	//���� const�� int���ʿ� ��ġ�ؼ� ������ �Ұ�
	printf("*p2= %d \n", *p2);
	*p2 = 300;
	printf(" * p2 = % d \n", *p2);
	p2 = &x;	//���� const p2 (p2�� �ּ�)const�� p2���ʿ� ��ġ�ؼ� �ּҺ��� �Ұ�
	printf("*p3= %d \n", *p3);
	*p3 = 500;	/* d���� const�� int���ʿ� ��ġ�ؼ� �� ���� �Ұ� 
	const p3 (p3�� �ּ�)const�� p3���ʿ� ��ġ�ؼ� �ּҺ��� �Ұ� */
	p3 = &y;
	return 0;
}