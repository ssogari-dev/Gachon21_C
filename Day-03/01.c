#include <stdio.h>
int main(void){
	int a, b, c, d, e, cnt = 0;
	
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if(a % 7 == 0) cnt++;
	if(b % 7 == 0) cnt++;
	if(c % 7 == 0) cnt++;
	if(d % 7 == 0) cnt++;
	if(e % 7 == 0) cnt++;
	
	printf("\n%d", cnt);
}
