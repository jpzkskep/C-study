//��� ���ϱ�
#include <stdio.h>
int main() {
	int arr[5];	//���� ���� �迭
	int i, ave = 0;
	for (i = 0; i < 5; i++) {	//�л����� ������ �Է¹޴� �κ�
		printf("%d��° �л��� ������? : ",i+1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++) {	//��ü �л� ������ ���� ���ϴ� �κ�
		ave = ave + arr[i];
	}
	printf("��ü �л��� ����� : %d \n", ave / 5);
	return 0;
}