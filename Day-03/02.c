#include <stdio.h>
int main(void){
	int num;
	scanf("%d", &num);
	
	if(num == 0)
		printf("0이 아닌 정수를 입력하십시오.");
	else if(num % 2 == 0)
		printf("짝수");
	else
		printf("홀수");
}
