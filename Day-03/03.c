#include<stdio.h>
int main(){
	int month;
	scanf("%d", &month);
	
	if((3<=month)&&(month<=5))
		printf("%d���� ���Դϴ�.", month);
	else if((6<=month)&&(month<=8))
		printf("%d���� �����Դϴ�.", month);
	else if((9<=month)&&(month<=11))
		printf("%d���� �����Դϴ�.", month);
	else if((month == 12)||(month == 1)||(month == 2))
		printf("%d���� �ܿ��Դϴ�.", month);
	else
		printf("�Է��� �߸��Ǿ����ϴ�.");
}
