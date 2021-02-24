#include <stdio.h>
void main(){
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	printf("%d %d %d %d %d", a+b, a-b, a*b, a/b, a%b);
	
	// divided by zero 등의 오류 발생 가능성. 
}
