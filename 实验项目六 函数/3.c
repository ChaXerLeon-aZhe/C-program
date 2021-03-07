//*题目：用递归法将一个整数n转换成字符串。例如：输入483，应输出字符串“483”。n的位数不确定，可以是任意位数的整数。
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

