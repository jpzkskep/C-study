//평균 구하기
#include <stdio.h>
int main() {
	int arr[5];	//성적 저장 배열
	int i, ave = 0;
	for (i = 0; i < 5; i++) {	//학생들의 성적을 입력받는 부분
		printf("%d번째 학생의 성적은? : ",i+1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++) {	//전체 학생 성적의 합을 구하는 부분
		ave = ave + arr[i];
	}
	printf("전체 학생의 평균은 : %d \n", ave / 5);
	return 0;
}