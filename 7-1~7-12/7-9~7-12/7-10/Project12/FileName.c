/*
�л��� �̸�, �й�, ��� ������ �����ϴ� ����ü�� �����ϰ�, 
�л� 3���� ������ �Է¹޾� ����Ͻÿ�.

�䱸����:

����ü �̸�: Student

���: name(���ڿ�), id(����), avg(�Ǽ�)

�л� 3���� ������ �Է¹޾� ���
*/

//Ʋ��
#include <stdio.h>

struct Student {
	char name[20];   // ���ڿ��� �迭�� ����
	int id;
	float avg;
};

int main() {
	struct Student t[3];

	// �Է�
	for (int i = 0; i < 3; i++) {
		printf("�л� %d�� �̸��� �����ÿ� : ", i + 1);
		scanf("%s", t[i].name);  // ���ڿ� �Է�

		printf("�л� %d�� id�� �����ÿ� : ", i + 1);
		scanf("%d", &t[i].id);   // ���� �Է�

		printf("�л� %d�� ��������� �����ÿ� : ", i + 1);
		scanf("%f", &t[i].avg);  // �Ǽ� �Է�
	}

	// ���
	printf("\n�Էµ� �л� ����:\n");
	for (int i = 0; i < 3; i++) {
		printf("�л� %d : �̸�=%s, ID=%d, ���=%.2f\n", i + 1, t[i].name, t[i].id, t[i].avg);
	}

	return 0;
}
