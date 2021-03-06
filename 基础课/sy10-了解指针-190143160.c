	/*   了解与指针有关的运算，熟悉变量的地址及变量的内容   */
	

#include <stdio.h>
#include <stdlib.h>

int main(){
	int a=100, b, *p=&a;		// 定义一个指针变量p，并把变量a的地址赋给指针变量p 
	
	printf("a=%d\tp_address=%x\t*p=%d\n", a, p, *p);	// *p表示a的地址里面的内容为100 
	printf("\n");
	
	b=*p;						// 相当于b=a 
	
	printf("b=%d\n", b);		// 此时b=a=100
	printf("\n");
	
	a=200;						// 修改a的内容
	
	printf("a=%d\tp_address=%x\t*p=%d\n", a, p, *p);
	
	p=&b;						// 把变量b的地址赋给指针变量p 
	
	printf("b=%d\tp_address=%x\t*p=%d\n", b, p, *p);
	printf("\n");				// 空一行 
	
	return 0;
}
