// for에서 100 초과 전까지 작동하는 방식

#include <stdio.h>
int main(void){
	int n, m, cnt = 0;
	printf("정수를 입력해주세요: ");
	scanf("%d", &n);
	
	if(n <= 0){
		printf("양의 정수를 입력하여 주십시오.");
		return 0;
	}
	
	for(m = 1 ; m <= 100 ; m++){
		if(m % n == 0){
			printf("%d ", m);
			cnt++;
		}
	}
	
	printf("\n배수의 개수는 %d개입니다.", cnt);
} 
