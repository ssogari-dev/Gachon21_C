#include <stdio.h>
int main(void){
	int a,b;
	char smb;
	
	scanf("%d %c %d", &a, &smb, &b);
	
	switch(smb){
		case '+':
			printf("%d", a+b);
			break;
		case '-':
			printf("%d", a-b);
			break;
		case '*':
			printf("%d", a*b);
			break;
		case '/':
			printf("%f", ((float)a/(float)b));
			break;
		default:
			printf("�ùٸ��� ���� ���Դϴ�.");
			break;
	}
}
