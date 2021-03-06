#include <stdio.h>
#define   SUM   100000
/* 计算捐款金额 */ 
int main()
{
	int i; 
	float amount, aver, total = 0;
	for (i = 1; i <=100; i++)
	{
		printf("请输入捐款金额：");
		scanf("%f", &amount);
		total += amount;
		
		if (total >= SUM)break;
	}
	aver = total / i;
	printf("\n总捐款额：%9.2f\n总捐款人数：%d\n平均捐款额度：%5.2f", total, i, aver);
	
	return 0;
} 

