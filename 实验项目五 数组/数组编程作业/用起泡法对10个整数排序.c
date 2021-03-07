#include <stdio.h>
int main(){
	int a[10],i,j,t;
	printf("Input ten numbers:\n");//输入10个数
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<9;i++)//用一个数和未进行比较的数比较，如果小于那个数，就交换位置
		for(j=9;j>i;j--)
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
	
	for(i=0;i<10;i++)
		printf("%5d",a[i]);//输出结果
	printf("\n");
		
	return 0;

}

