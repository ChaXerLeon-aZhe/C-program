	
	/*	sy8: “输入一个整数并将其插入到此数组的合适位置，插入数据后该数组的元素仍然有序，还是从小到大排列”	*/
	

#include <stdio.h>

int main(){
	int array[10] = {1, 28, 60, 100, 800, 1000};
	int i, j=6, input_data;
	
	printf("Please input a integer:");
	
	scanf("%d", &input_data);
	
	printf("\n");
	printf("Before:\t");
	for(i=0; i<j; i++)
		printf("%d\t", array[i]);
	
	for(i=j-1; i>=0; i--){
		if(array[i]>input_data)
			array[i+1] = array[i];
		else break;
	}
	array[i+1] = input_data;
	
	printf("\n");
	printf("After:\t");
	j++;
	for(i=0; i<j; i++)
		printf("%d\t", array[i]);
	
	return 0;
}
