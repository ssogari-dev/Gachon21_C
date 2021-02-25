#include <stdio.h>
int main(void){
	int num, cnt = 0;
	for(num = 1 ; num <= 100 ; num++){
		if(num % 2 == 1){
			printf("%d ", num);
			cnt++;
		}
	}
	printf("\nÈ¦¼ö´Â ÃÑ %d°³ ÀÔ´Ï´Ù.", cnt);
}
