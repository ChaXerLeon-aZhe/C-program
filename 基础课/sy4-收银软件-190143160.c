#include <stdio.h>

	//	�������

int main(){
	int sum=0, i=1, amount=0, receive;
	
	printf("*************** ������� ***************\n");
	printf("************* ���������� 0 *************\n");
	printf("\n");
	
	do{
		printf("��%d�ʽ�", i);
		scanf("%d", &amount);
		
		sum = sum+amount;
		
		printf("����Ʒ����%d\t", i);
		printf("��ǰ�ۼƶ%d\n", sum);
		i++;
		
		printf("\n");
	}while(amount!=0);
	
	printf("\nӦ�գ�%d", sum);
	printf("\nʵ�գ�");
	scanf("%d", &receive);
	printf("\n���㣺%d\n", receive-sum);
	
	printf("\n���׳ɹ�����ӭ�´ι��٣�");
	
	return 0;
}
