#include <stdio.h>

float power(float a, int b){
	float result=1;
	int i;
	for(i=0;i<b;i++){
		result *= a;
	}
	return result;
}

void main(){
	float x;
	int y;
	printf("计算x的y次方\n请输入x和y：");
	scanf("%f %d", &x, &y);
	printf("\n");
	printf("结果为%.1f", power(x,y));
	printf("\n");
}
