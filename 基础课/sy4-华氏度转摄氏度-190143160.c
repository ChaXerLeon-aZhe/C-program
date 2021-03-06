#include <stdio.h>

	//	华氏度转摄氏度

int main(){
	float f, c;
	
	printf("输入华氏温度：");
	scanf("%f", &f);
	
	c = (f-32)*5/9;
	
	printf("摄氏温度为：%.1f", c);
	
	return 0;
} 
