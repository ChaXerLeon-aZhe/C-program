#include <stdio.h>
int main(){
	int a[10],i,j,t;
	printf("Input ten numbers:\n");//����10����
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<9;i++)//��һ������δ���бȽϵ����Ƚϣ����С���Ǹ������ͽ���λ��
		for(j=9;j>i;j--)
			if(a[i]<a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
	
	for(i=0;i<10;i++)
		printf("%5d",a[i]);//������
	printf("\n");
		
	return 0;

}

