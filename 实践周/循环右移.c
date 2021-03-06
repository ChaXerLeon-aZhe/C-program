#include <stdio.h>
#define   N   8
int main(){
	int i;
	float a[N], t;
	
	printf("请输入%d个数：\n", N);
	
	for(i=0; i<N; i++)
		scanf("%f", &a[i]);	
	
	t = a[N-1];
	for(i=N-1; i>0; i--){
		a[i] = a[i-1];
	}
	a[0] = t;
	
	printf("循环后移一位是：\n");
	for(i=0; i<N; i++)
		printf("%6.2f", a[i]);
	printf("\n");
	return 0;
}
