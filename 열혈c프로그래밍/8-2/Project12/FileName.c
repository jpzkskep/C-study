#include <stdio.h>
int main(void) {
	int num;
	printf("�ڿ��� �Է�: ");
	scanf("%d", &num);
	if (num == 1) goto ONE;
	else if (num == 2) goto TWO;
	else goto OTHER;
ONE:
	printf("1�Էµ�\n");
	goto END;
TWO:
	printf("2�Էµ�\n");
	goto END;
OTHER:
	printf("3Ȥ�� �ٸ��� �Էµ�\n");
	goto END;
END:
	return 0;
}