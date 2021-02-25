#include<stdio.h>
int main(){
	int month;
	scanf("%d", &month);
	
	if((3<=month)&&(month<=5))
		printf("%d월은 봄입니다.", month);
	else if((6<=month)&&(month<=8))
		printf("%d월은 여름입니다.", month);
	else if((9<=month)&&(month<=11))
		printf("%d월은 가을입니다.", month);
	else if((month == 12)||(month == 1)||(month == 2))
		printf("%d월은 겨울입니다.", month);
	else
		printf("입력이 잘못되었습니다.");
}
