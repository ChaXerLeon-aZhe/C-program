#include <stdio.h>
#define   D   10
float average(float array[]){
	float sum, aver;
	int i;
	for(i=0;i<D;i++){
		sum += array[i];
	}
	aver = sum/D;
	return aver;
}

void main(){
	float score[D]={82, 100, 87.5, 89, 78, 
					85, 67.5, 92.5, 93, 94}, result;
	result = average(score);
	printf("Æ½¾ù·Ö%.2f", result);
	printf("\n");
}
