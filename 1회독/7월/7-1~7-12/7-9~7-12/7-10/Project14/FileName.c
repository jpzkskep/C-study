/*
����:
������ �̸�, ���, ������ ����ü�� ������ ��,
���� 5���� ������ �Է¹ް�, �� �߿��� ������ ���� ���� ������ �̸��� ������ ����Ͻÿ�.

�䱸����
����ü �̸�: Employee
���:
name (���ڿ�)
emp_id (����)
salary (����)
���� 5���� ������ �Է¹޴´�.

���� ������ ���� ���� ���� �� ���� �̸��� ������ ����Ѵ�.
*/

//Ʋ��
#include <stdio.h>

struct Employee {
	char name[20];
	int emp_id;
	int salary;
};

int highest(struct Employee e[], int count);

int main() {
	struct Employee e[5];

	for (int i = 0; i < 5; i++) {
		printf("����%d�� �̸��� �Է��Ͻÿ� : ", i + 1);
		scanf("%s", e[i].name);

		printf("����%d�� ����� �Է��Ͻÿ� : ", i + 1);
		scanf("%d", &e[i].emp_id);

		printf("����%d�� ������ �Է��Ͻÿ� : ", i + 1);
		scanf("%d", &e[i].salary);
	}

	int max_index = highest(e, 5);

	printf("\n������ ���� ���� ������ %s�̰�, ������ %d���Դϴ�.\n", e[max_index].name, e[max_index].salary);

	return 0;
}

// �ְ� ���� �޴� ����� �ε����� ��ȯ
int highest(struct Employee e[], int count) {
	int max_index = 0;
	for (int i = 1; i < count; i++) {
		if (e[i].salary > e[max_index].salary) {
			max_index = i;
		}
	}
	return max_index;
}