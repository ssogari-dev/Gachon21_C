#include <stdio.h>
void main(){
	int a = 0, b = 0, c = 0; // �������� A, B, C�� �ڷ����� ���õ��� �ʾ����� ������ ������.
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	printf("%d \n", (a+b)%c);
	printf("%d", (a%c+b%c)%c);
}
