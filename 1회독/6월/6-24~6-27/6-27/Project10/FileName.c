/*����ڷκ��� **���ĺ� �ҹ��� 1��(char)**�� �Է¹޾�, 
������ ���� �ش� ������ ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
#include <stdio.h>
int main() {
	char k;
	printf("���ĺ� �Է� : ");
	scanf("%c", &k);
	switch (k) {
	case 'a':
		printf("���� \n");
		break;
	case 'b':
		printf("�� \n");
		break;
	case 'c':
		printf("�� \n");
		break;
	default:
		printf("�˼��ؿ�, �� �����!");
		break;
	}
	return 0;
}