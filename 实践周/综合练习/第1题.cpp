#include <stdio.h>
#define  N  8

int main(){
	int a[N], i;
	int max=0, sec_max=0;			//���������������ڴ��Ŀ���������±� 
	
	printf("������%d��������ͬ������:\n", N);
	for(i=0; i<N; i++)
		scanf("%d", &a[i]);				//����8����ͬ������
	
	/* Ѱ������� */
	for(i=1; i<N; i++)
		if(a[max]<a[i]){
			max = i;
		}
	
	/* Ѱ�Ҵδ��� */ 
	for(i=1; i<N; i++)
		if(a[sec_max]<a[i] && a[i]<a[max]){
			sec_max = i;
		}
	
	printf("�����Ϊ%d�����±�Ϊ%d\n", a[max], max);
	printf("�δ���Ϊ%d�����±�Ϊ%d\n", a[sec_max], sec_max);
	return 0;
}
