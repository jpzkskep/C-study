#include <stdio.h>
struct employee {
	char name[50];
	char jumin[50];
	int money;
};
int main(void) {
	struct employee man1;
	fputs("�������̸�:", stdout);
	scanf("%s", man1.name);
	fputs("�������� �ֹε�Ϲ�ȣ:", stdout);
	scanf("%s", man1.jumin);
	fputs("�������� �޿�����:", stdout);
	scanf("%d", &(man1.money));
	printf("������ �̸�:%s ������ �ֹι�ȣ:%s ������ �޿�:%d", man1.name, man1.jumin, man1.money);
	return 0;
}