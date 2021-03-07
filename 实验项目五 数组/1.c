#include<stdio.h>

int main(){
	int a[10],i,j,n;
	printf("输入10个数："); 
	for(i=1;i<=10;i++)
		scanf("%d",&a[i]);

	printf("\n该十个数为：");
	for(i=1;i<=10;i++)
		printf("%3d",a[i]);
	
	for(i=1;i<=10;i++)
	for(j=i;j<=10;j++){ //从第一个开始进行比较 
		if(a[i]>a[j]){ //选择最小的数 
		n=a[i];
		a[i]=a[j];
		a[j]=n;}
	}
	printf("\n该十个数升序为： ");
	for(i=1;i<=10;i++)
	printf("%3d",a[i]);
} 

