/*�迭�� ����Ͽ� 10���� ������ �Է��� ����� ���ϰ� 
������ ��պ��� �����л��� ���հ���
������ ��պ��� ���ų� ���� �л��� �հ��� ���*/
#include <stdio.h>
int main() {
	int arr[10];
	int i, ave = 0,result=0;
	for (i = 0; i <10; i++) {
		printf("%d ��° �л��� ������? ", i+1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++) {
		result = result + arr[i];
	}
	ave = result / 10;
	printf("��ü �л��� ����� : %d \n", ave);
	for (i = 0; i < 10; i++) {
		if (arr[i] >= ave) {
			printf("�л�%d : �հ� \n", i + 1);
		}
		else {
			printf("�л�%d : ���հ� \n", i + 1);
		}
	}
	return 0;
}