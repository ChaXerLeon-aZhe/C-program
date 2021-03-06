#include <stdio.h>

int main(){
	int a[8], i, max=0, value=0;
	
	printf("Please input 8 numbers:");
	//	71 64 82 77 83 76 95 78
	for(i=0;i<8;i++){
		scanf("%d", &a[i]);
		if(a[i] > max){
			max=a[i];
			value=i;
		}
	}
	printf("\n");
	
	printf("Maximum is a[%d], which is %d.", value, max);
	printf("\n");
	return 0;
}
