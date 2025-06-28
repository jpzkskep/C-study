/*배열을 사용하여 10명의 성적을 입력후 평균을 구하고 
성적이 평균보다 낮은학생은 불합격을
성적이 평균보다 높거나 같은 학생은 합격을 출력*/
#include <stdio.h>
int main() {
	int arr[10];
	int i, ave = 0,result=0;
	for (i = 0; i <10; i++) {
		printf("%d 번째 학생의 성적은? ", i+1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++) {
		result = result + arr[i];
	}
	ave = result / 10;
	printf("전체 학생의 평균은 : %d \n", ave);
	for (i = 0; i < 10; i++) {
		if (arr[i] >= ave) {
			printf("학생%d : 합격 \n", i + 1);
		}
		else {
			printf("학생%d : 불합격 \n", i + 1);
		}
	}
	return 0;
}