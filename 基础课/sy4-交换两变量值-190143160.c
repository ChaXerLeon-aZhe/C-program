#include <stdio.h>

	//	交换两变量值 

int main(){
	int a, b, t;
	
	printf("输入两个整数：\n");
	
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	
	t=a;
	a=b;
	b=t;
	
	printf("\n交换后\na=%d\nb=%d", a, b);
	
	return 0;
}
