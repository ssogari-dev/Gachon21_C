#include <stdio.h>
int main(void){
	int n1, n2, sum = 0;
	
	printf("첫번째 정수를 입력하세요: ");
	scanf("%d", &n1);
	
	
	printf("두번째 정수를 입력하세요: ");
	scanf("%d", &n2);
	
	for(sum -= n1 ; n1 < n2 ; n1++ ){
		sum += n1;
	}
	
	printf("합: %d", sum);
}
