#include <stdio.h>
#define   N   8
int main(){
	int i;
	float a[N], t;
	
	printf("������%d������\n", N);
	
	for(i=0; i<N; i++)
		scanf("%f", &a[i]);	
	
	t = a[N-1];
	for(i=N-1; i>0; i--){
		a[i] = a[i-1];
	}
	a[0] = t;
	
	printf("ѭ������һλ�ǣ�\n");
	for(i=0; i<N; i++)
		printf("%6.2f", a[i]);
	printf("\n");
	return 0;
}
