#include<stdio.h>
int main(void){
	int age[5] = { 0, };
	int a = 0, cnt = 0;
	for(a = 0 ; a <= 4 ; a++){
		scanf("%d", &age[a]);
		if((age[a] >= 20) && (age[a] <= 29))	cnt++;
	}
	
	printf("5�� �� 20��� %d�� �Դϴ�.", cnt);
}
