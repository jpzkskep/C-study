//�򰥸�
#include <stdio.h>
struct test {
	int c;
	int* pointer;
};
int main() {
	struct test t;
	struct test* pt = &t;
	int i = 0;
	t.pointer = &i;	//t�� ��� pointer�� i�� ����Ŵ
	*t.pointer = 3;	//t�� ��� pointer�� ����Ű�� ������ ���� 3����
	printf("i : %d \n", i);
	//	->�� *���� �켱 ������ ����
	//�� pt�� ����Ű�� ����ü ������ pointer ����� ����Ű��
	//������ ���� 4�� �ٲ۴�
	*pt->pointer = 4;
	printf("i : %d \n",i);
	return 0;
}