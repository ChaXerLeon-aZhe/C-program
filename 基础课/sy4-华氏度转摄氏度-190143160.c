#include <stdio.h>

	//	���϶�ת���϶�

int main(){
	float f, c;
	
	printf("���뻪���¶ȣ�");
	scanf("%f", &f);
	
	c = (f-32)*5/9;
	
	printf("�����¶�Ϊ��%.1f", c);
	
	return 0;
} 
