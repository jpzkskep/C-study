// ��Ŭ���� ȣ������ �̿��ؼ� N���� �� ���� 
// �ִ������� ���ϴ� �Լ��� ��������.
//Ʋ��
#include <stdio.h>
int Euclid(int first, int second); 
int main() {
	int N;
	int num, result;
	printf("N�� �Է��Ͻÿ�: ");
	scanf("%d", &N);
	if (N <= 0) {
		printf("N�� 1 �̻��̾�� �մϴ�.\n");
		return 1;
	}
	printf("���� %d���� �Է��ϼ���: ", N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		if (i == 0) {
			result = num; // ù ���ڴ� �׳� ����
		}
		else {
			result = Euclid(result, num); // �� ���� �ִ������� ��� �����ؼ� ���
		}
	}
	printf("�ִ������� %d�Դϴ�.\n", result);
	return 0;
}
int Euclid(int first, int second) {
	int temp;
	for (;;) {
		if (first % second == 0) {
			return second;  
		}
		else {
			if (first % second > second) {
				first = first % second;
			}
			else {
				temp = first % second;
				first = second;
				second = temp;
			}
		}
	}
}