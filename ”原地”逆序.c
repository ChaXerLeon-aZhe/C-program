#include <stdio.h>
#define   N   8
int main(){
	int i;
	float a[N], t;
	
	printf("请输入%d个数：\n", N);
	
	for(i=0; i<N; i++)
		scanf("%f", &a[i]);
		
	for(i=0; i<N/2; i++){
		t = a[i];
		a[i] = a[N-1-i];
		a[N-1-i] = t;
	}
	
	printf("逆序存放后是：\n");
	for(i=0; i<N; i++)
		printf("%6.2f", a[i]);
	printf("\n");
	return 0;
} 
