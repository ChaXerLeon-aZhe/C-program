
	/*	sy8: ��������ƽ���������������С��ƽ����������	*/
	

#include <stdio.h>

int main(){
	int i, x;
	int count = 0;
	int array[30];
	float sum = 0;
	
	printf("����ƽ��ֵ�����С��ƽ��������������<=30��\n");
	printf("\n");
	printf("�����С\t\t ��������\t ���������ݣ�");
	
	scanf("%d", &x);
	while(x != 999){
		array[count] = x;
		printf("%d\t", count+1);
		for(i=0; i<=count; i++){
			printf("%d\t", array[i]);
		}
		printf("\n");
		sum += x;
		count++;
		scanf("%d", &x);
	}
	
	printf("\n");
	printf("�������ݽ�����ǣ�%d\n", x);
	printf("\n");
	if(count>0){
		printf("����%d������ƽ��ֵΪ��%f\n", count, sum/count);
		printf("\n");
		printf("С��ƽ��ֵ�������£�\n");
		for(i=0; i<count; i++){
			if(array[i] < sum/count)
				printf("%d\n", array[i]);
		}
	}
	
	return 0;
}
