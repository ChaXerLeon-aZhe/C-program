	/*   �˽���ָ���йص����㣬��Ϥ�����ĵ�ַ������������   */
	

#include <stdio.h>
#include <stdlib.h>

int main(){
	int a=100, b, *p=&a;		// ����һ��ָ�����p�����ѱ���a�ĵ�ַ����ָ�����p 
	
	printf("a=%d\tp_address=%x\t*p=%d\n", a, p, *p);	// *p��ʾa�ĵ�ַ���������Ϊ100 
	printf("\n");
	
	b=*p;						// �൱��b=a 
	
	printf("b=%d\n", b);		// ��ʱb=a=100
	printf("\n");
	
	a=200;						// �޸�a������
	
	printf("a=%d\tp_address=%x\t*p=%d\n", a, p, *p);
	
	p=&b;						// �ѱ���b�ĵ�ַ����ָ�����p 
	
	printf("b=%d\tp_address=%x\t*p=%d\n", b, p, *p);
	printf("\n");				// ��һ�� 
	
	return 0;
}
