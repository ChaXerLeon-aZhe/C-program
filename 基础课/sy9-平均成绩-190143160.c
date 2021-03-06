#include <stdio.h>

int main(){
	int a[4][5]={{80,84,78,81,82},{65,46,63,70,73},{87,93,95,82,88},{75,74,78,67,77}};
	int sum=0, i, j;
	
	for(i=0;i<4;i++){
		for(j=0;j<5;j++)
			sum += a[i][j];
		printf("%.2f\t", sum/5.0);
		sum=0;
	}
	printf("\n");
	return 0;
}
