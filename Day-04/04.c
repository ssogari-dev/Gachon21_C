#include <stdio.h>
#include <limits.h> // INT_n 사용위한 헤더 파일

int main(void){
	int n, cnt;
	int max = INT_MIN, min = INT_MAX, sum = 0;
	
	for(cnt = 1 ; cnt <= 10 ; cnt++){
		printf("정수를 입력하세요: ");
		scanf("%d", &n);
		
		if(n >= max)		max = n;
		if(min >= n)		min = n;
		
		sum += n;
	}
	
	printf("최댓값: %d, 최솟값: %d, 평균값: %f", max, min, (float)sum/10);
}
