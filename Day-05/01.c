#include <stdio.h>
int main(void){
	for(int a = 1 ; a <= 9 ; a++){
		for(int b = 1; b <= 9 ; b++){
			if(a % 2 != 0)	continue;
			printf("%d x %d = %d \n", a, b, a*b);
		}
		printf("\n");
	}
}
