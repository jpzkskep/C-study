//��(sec)�� ��,��,�ʷ� �ٲٱ�
#include <stdio.h>
int main() {
	int sec;	//�Էµ� ��
	int hour;
	int min;
	int sec1;	//���� ��
	printf("�ʸ� �Է��ϼ���:");
	scanf("%d", &sec);
	hour = sec / 3600;
	min = (sec % 3600) / 60;
	sec1 = (sec % 3600) % 60;
	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�. \n",sec,hour,min,sec1);
	return 0;
}