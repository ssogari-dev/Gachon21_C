// 미리 최댓값을 구하여 for문을 작동하는 방식
 
#include <stdio.h>
int main(void){
	int n, max, cnt;
	printf("정수를 입력해주세요: ");
	scanf("%d", &n);
	
	if(n <= 0){
		printf("양의 정수를 입력하여 주십시오.");
		return 0;
	}

	max = 100 / n;
	
	for(cnt = 1 ; cnt <= max ; cnt++){
		printf("%d ", cnt*n);
	}
	
	printf("\n배수의 개수는 %d개입니다.", max);	
}
