#include <stdio.h>
int main(void) {
	char name[50];
	char jumin[50];
	char phone[50];
	char food[50];
	char hobby[50];

	FILE* output = fopen("input.txt", "rt");
	/*
	FILE* input = fopen("input.txt", "wt");

	printf("�̸�:");
	scanf("%s", name);
	printf("�ֹι�ȣ:");
	scanf("%s", jumin);
	printf("��ȭ��ȣ:");
	scanf("%s", phone);
	printf("����:");
	scanf("%s", food);
	printf("���:");
	scanf("%s", hobby);

	fputs("#�̸�: ", input);
	fputs(name, input);
	fputs("\n", input);
	fputs("#�ֹι�ȣ: ", input);
	fputs(jumin, input);
	fputs("\n", input);
	fputs("#��ȭ��ȣ: ", input);
	fputs(phone, input);
	fputs("\n", input);
	fputs("#��ܸԴ� ����: ", input);
	fputs(food, input);
	fputs("\n", input);
	fputs("#���: ", input);
	fputs(hobby, input);
	
	*/
	fgets(name, sizeof(name), output);
	printf("%s", name);
	fgets(jumin, sizeof(jumin), output);
	printf("%s", jumin);
	fgets(phone, sizeof(phone), output);
	printf("%s", phone);
	fgets(food, sizeof(food), output);
	printf("%s", food);
	fgets(hobby, sizeof(hobby), output);
	printf("%s", hobby);
	return 0;
}