// for���� 100 �ʰ� ������ �۵��ϴ� ���

#include <stdio.h>
int main(void){
	int n, m, cnt = 0;
	printf("������ �Է����ּ���: ");
	scanf("%d", &n);
	
	if(n <= 0){
		printf("���� ������ �Է��Ͽ� �ֽʽÿ�.");
		return 0;
	}
	
	for(m = 1 ; m <= 100 ; m++){
		if(m % n == 0){
			printf("%d ", m);
			cnt++;
		}
	}
	
	printf("\n����� ������ %d���Դϴ�.", cnt);
} 
