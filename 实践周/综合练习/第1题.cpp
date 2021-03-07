#include <stdio.h>
#define  N  8

int main(){
	int a[N], i;
	int max=0, sec_max=0;			//声明两个变量用于存放目标整数的下标 
	
	printf("请输入%d个互不相同的整数:\n", N);
	for(i=0; i<N; i++)
		scanf("%d", &a[i]);				//输入8个不同的整数
	
	/* 寻找最大数 */
	for(i=1; i<N; i++)
		if(a[max]<a[i]){
			max = i;
		}
	
	/* 寻找次大数 */ 
	for(i=1; i<N; i++)
		if(a[sec_max]<a[i] && a[i]<a[max]){
			sec_max = i;
		}
	
	printf("最大数为%d，其下标为%d\n", a[max], max);
	printf("次大数为%d，其下标为%d\n", a[sec_max], sec_max);
	return 0;
}
