//ũ�� ���ϱ�
#include <stdio.h>
int main() {
	int i, j;
	printf("ũ�⸦ ���� �� ���� �Է��� �ּ��� :");
	scanf("%d %d", &i, &j);
	if (i > j) {
		printf("%d �� %d���� Ů�ϴ�. \n", i, j);
	}
	if (i< j) {
		printf("%d�� %d���� �۽��ϴ�. \n", i, j);
	}
	if (i >= j) {
		printf("%d�� %d���� ũ�ų� �����ϴ�. \n", i, j);
	}
	if (i <= j) {
		printf("%d�� %d���� �۰ų� �����ϴ�. \n", i, j);
	}
	if (i == j) {
		printf("%d�� %d�� �����ϴ�. \n", i, j);
	}
	if (i != j) {
		printf("%d�� %d�� �ٸ��ϴ�. \n", i, j);
	}
	return 0;
}