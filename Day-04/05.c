#include <stdio.h>
int main(void){
	int n1, n2, sum = 0;
	
	printf("ù��° ������ �Է��ϼ���: ");
	scanf("%d", &n1);
	
	
	printf("�ι�° ������ �Է��ϼ���: ");
	scanf("%d", &n2);
	
	for(sum -= n1 ; n1 < n2 ; n1++ ){
		sum += n1;
	}
	
	printf("��: %d", sum);
}
