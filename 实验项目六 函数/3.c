//*��Ŀ���õݹ鷨��һ������nת�����ַ��������磺����483��Ӧ����ַ�����483����n��λ����ȷ��������������λ����������
#include<stdio.h>
int main(){
	void convert(int n);
	int k;
	scanf("%d",&k);
	if(k<0){
		putchar('-');
		k=-k;
	}
	convert(k);
	return 0;	
}

void convert(int n){ 
	int i; 
	if ((i=n/10)!=0)
	convert(i);
	putchar(n%10+'0');
}

