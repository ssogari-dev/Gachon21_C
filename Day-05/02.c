#include <stdio.h>
int main(void){
	int a, sum = 0;
	while(1){
		scanf("%d", &a);
		if(a <= 0)	break;
		sum += a;
	}
	printf("%d", sum);
}
