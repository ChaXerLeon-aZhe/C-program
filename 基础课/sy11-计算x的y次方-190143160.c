#include <stdio.h>

float power(float a, int b){
	float result=1;
	int i;
	for(i=0;i<b;i++){
		result *= a;
	}
	return result;
}

void main(){
	float x;
	int y;
	printf("����x��y�η�\n������x��y��");
	scanf("%f %d", &x, &y);
	printf("\n");
	printf("���Ϊ%.1f", power(x,y));
	printf("\n");
}
