#include <stdio.h>
#include <limits.h> // INT_n ������� ��� ����

int main(void){
	int n, cnt;
	int max = INT_MIN, min = INT_MAX, sum = 0;
	
	for(cnt = 1 ; cnt <= 10 ; cnt++){
		printf("������ �Է��ϼ���: ");
		scanf("%d", &n);
		
		if(n >= max)		max = n;
		if(min >= n)		min = n;
		
		sum += n;
	}
	
	printf("�ִ�: %d, �ּڰ�: %d, ��հ�: %f", max, min, (float)sum/10);
}
