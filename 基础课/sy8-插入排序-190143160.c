	
	/*	sy8: ������һ��������������뵽������ĺ���λ�ã��������ݺ�������Ԫ����Ȼ���򣬻��Ǵ�С�������С�	*/
	

#include <stdio.h>

int main(){
	int array[10] = {1, 28, 60, 100, 800, 1000};
	int i, j=6, input_data;
	
	printf("Please input a integer:");
	
	scanf("%d", &input_data);
	
	printf("\n");
	printf("Before:\t");
	for(i=0; i<j; i++)
		printf("%d\t", array[i]);
	
	for(i=j-1; i>=0; i--){
		if(array[i]>input_data)
			array[i+1] = array[i];
		else break;
	}
	array[i+1] = input_data;
	
	printf("\n");
	printf("After:\t");
	j++;
	for(i=0; i<j; i++)
		printf("%d\t", array[i]);
	
	return 0;
}
