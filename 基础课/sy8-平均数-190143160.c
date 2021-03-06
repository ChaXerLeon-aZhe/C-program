
	/*	sy8: “计算其平均数，并输出所有小于平均数的数”	*/
	

#include <stdio.h>

int main(){
	int i, x;
	int count = 0;
	int array[30];
	float sum = 0;
	
	printf("计算平均值及输出小于平均数的数（总数<=30）\n");
	printf("\n");
	printf("数组大小\t\t 数组内容\t 请输入数据：");
	
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
	printf("输入数据结束标记：%d\n", x);
	printf("\n");
	if(count>0){
		printf("输入%d个数的平均值为：%f\n", count, sum/count);
		printf("\n");
		printf("小于平均值的数如下：\n");
		for(i=0; i<count; i++){
			if(array[i] < sum/count)
				printf("%d\n", array[i]);
		}
	}
	
	return 0;
}
