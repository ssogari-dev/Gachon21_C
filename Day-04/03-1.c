// �̸� �ִ��� ���Ͽ� for���� �۵��ϴ� ���
 
#include <stdio.h>
int main(void){
	int n, max, cnt;
	printf("������ �Է����ּ���: ");
	scanf("%d", &n);
	
	if(n <= 0){
		printf("���� ������ �Է��Ͽ� �ֽʽÿ�.");
		return 0;
	}

	max = 100 / n;
	
	for(cnt = 1 ; cnt <= max ; cnt++){
		printf("%d ", cnt*n);
	}
	
	printf("\n����� ������ %d���Դϴ�.", max);	
}
