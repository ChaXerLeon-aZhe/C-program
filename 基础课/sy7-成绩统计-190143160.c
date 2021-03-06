#include <stdio.h>

int main(){
	int exellent=0, good=0, medium=0, pass=0, fail=0;
	int all[10], i;
	
	printf("Input the scores:\n");
	for(i=0; i<10; i++){
		scanf("%d", &all[i]);
	}
	
	for(i=0; i<10; i++){
		if(all[i]>=90 && all[i]<=100) exellent++;
		else if(all[i]<90 && all[i]>=80) good++;
		else if(all[i]<80 && all[i]>=70) medium++;
		else if(all[i]<70 && all[i]>=60) pass++;
		else if(all[i]<60 && all[i]>=0) fail++;
	}
	printf("\n");
	
	printf("Exellent:%d    Good:%d    Medium:%d    Pass:%d    Fail:%d\n", exellent, good, medium, pass, fail);
	
	return 0;
}
