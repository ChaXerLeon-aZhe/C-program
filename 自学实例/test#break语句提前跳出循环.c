#include <stdio.h>
#define   SUM   100000
/* �������� */ 
int main()
{
	int i; 
	float amount, aver, total = 0;
	for (i = 1; i <=100; i++)
	{
		printf("���������");
		scanf("%f", &amount);
		total += amount;
		
		if (total >= SUM)break;
	}
	aver = total / i;
	printf("\n�ܾ��%9.2f\n�ܾ��������%d\nƽ������ȣ�%5.2f", total, i, aver);
	
	return 0;
} 

