#include<stdio.h>

int main(){
	int a[10],i,j,n;
	printf("����10������"); 
	for(i=1;i<=10;i++)
		scanf("%d",&a[i]);

	printf("\n��ʮ����Ϊ��");
	for(i=1;i<=10;i++)
		printf("%3d",a[i]);
	
	for(i=1;i<=10;i++)
	for(j=i;j<=10;j++){ //�ӵ�һ����ʼ���бȽ� 
		if(a[i]>a[j]){ //ѡ����С���� 
		n=a[i];
		a[i]=a[j];
		a[j]=n;}
	}
	printf("\n��ʮ��������Ϊ�� ");
	for(i=1;i<=10;i++)
	printf("%3d",a[i]);
} 

