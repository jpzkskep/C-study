//�ƽ�Ű�ڵ� ���� ���� ū ���ڸ� ã�Ƽ� ��� �ҹ��ڸ�
#include <stdio.h>
int main(void) {
	char input[50];
	int result[50] = { 0 };
	int count = 0;
	char alphabet[26];
	for (int i = 0; i < 26; i++) {
		alphabet[i] = 97 + i;
	}
	printf("���ܾ �Է��Ͻÿ�:");
	scanf("%s", input);
	while (input[count] != '\0') {
		result[count] = input[count] - 'a';
		count++;
	}
	int max = result[0];
	for (int i = 0; i < 50; i++) {
		if (result[i] > max) {
			max = result[i];
		}
	}
	printf("%c\n", alphabet[max]);	
	return 0;
}