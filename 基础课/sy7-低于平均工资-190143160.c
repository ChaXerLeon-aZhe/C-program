#include <stdio.h>

int main(){
	int num[10], wage[10], i;
	int average, sum=0;
	
	printf("Input the wages: \n");
	for(i=0; i<10; i++){
		scanf("%d", &num[i]);
		scanf("%d", &wage[i]);
		sum += wage[i];
	}
	printf("\n");
	
	average = sum/i;
	
	printf("Below the average:\n");
	for(i=0; i<10; i++){
		if(wage[i]<average)
			printf("%d	%d\n", num[i], wage[i]);
	}
	
	return 0;
}
