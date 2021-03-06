#include <stdio.h>

	//	收银软件

int main(){
	int sum=0, i=1, amount=0, receive;
	
	printf("*************** 收银软件 ***************\n");
	printf("************* 结账请输入 0 *************\n");
	printf("\n");
	
	do{
		printf("第%d笔金额：", i);
		scanf("%d", &amount);
		
		sum = sum+amount;
		
		printf("总商品数：%d\t", i);
		printf("当前累计额：%d\n", sum);
		i++;
		
		printf("\n");
	}while(amount!=0);
	
	printf("\n应收：%d", sum);
	printf("\n实收：");
	scanf("%d", &receive);
	printf("\n找零：%d\n", receive-sum);
	
	printf("\n交易成功，欢迎下次光临！");
	
	return 0;
}
