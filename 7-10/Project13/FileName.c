/*
����: ���� ���� �Է� �� ���
����:
������ �̸�, ���, ������ �����ϴ� ����ü�� �����ϰ�,
���� 3���� ������ �Է¹޾� ����Ͻÿ�.

�䱸����:
����ü �̸�: Employee

���:
name (���ڿ�, �ִ� 20��)
emp_id (����)
salary (����)

����:
���� 3���� ������ �Է¹ް�, �Է��� ������� ����Ͻÿ�.
*/
#include <stdio.h>
struct Employee {
	char name[20];
	int emp_id;
	int salary;
};
int main() {
	struct Employee t[3];
	for (int i = 0; i < 3; i++) {
		printf("����%d�� �̸��� �Է��Ͻÿ� : ",i+1);
		scanf("%s", t[i].name);
		printf("\n");
		printf("����%d�� ����� �Է��Ͻÿ� : ",i+1);
		scanf("%d", &t[i].emp_id);
		printf("\n");
		printf("����%d�� ������ �Է��Ͻÿ� : ",i+1);
		scanf("%d", &t[i].salary);
		printf("\n");
	}
	printf("----------------------------------------------");
	printf("\n");
	for (int i = 0; i < 3; i++) {
		printf("���� %d�� �̸�,���,���� %s %d %d", i + 1, t[i].name, t[i].emp_id, t[i].salary);
		printf("\n");
	}
	return 0;
}