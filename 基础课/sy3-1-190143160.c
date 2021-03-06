#include <stdio.h>

int main(){
	int a, b, i;
	float t;
	
	printf("输入两个实数\n");
	scanf("%d %d",&a, &b);
	
	printf("1   +\n");
	printf("2   -\n");
	printf("3   *\n");
	printf("4   /\n");
	
	scanf("%d", &i);
	
	if(i==1) {printf("\n%d\n", a+b);}
	else if(i==2) {printf("\n%d\n", a-b);}
	else if(i==3) {printf("\n%d\n", a*b);}
	else if(i==4) {printf("\n%d\n", a/b);}
	else printf("\nErrer\n");
	
	printf("\n设计：190143160，谢谢使用！\n");
	
	return 0;
} 
