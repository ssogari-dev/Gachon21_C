#include <stdio.h>
int main(void){
	int num;
	scanf("%d", &num);
	
	if(num == 0)
		printf("0�� �ƴ� ������ �Է��Ͻʽÿ�.");
	else if(num % 2 == 0)
		printf("¦��");
	else
		printf("Ȧ��");
}
