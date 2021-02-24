#include <stdio.h>
void main(){
	int a = 0, b = 0, c = 0; // 문제에서 A, B, C의 자료형이 제시되지 않았으나 정수로 간주함.
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	printf("%d \n", (a+b)%c);
	printf("%d", (a%c+b%c)%c);
}
