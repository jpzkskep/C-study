//���ڿ� �ٲٱ�
#include <stdio.h>
int main() {
	char word[] = { "long sentence" };
	printf("�������� : %s \n", word);
	word[0] = 'a';
	word[1] = 'b';
	word[2] = 'c';
	word[3] = 'd';
	printf("�������� : %s \n", word);
	return 0;
}