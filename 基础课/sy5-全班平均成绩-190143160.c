
	/*	全班平均成绩	*/

#include <stdio.h>

int main(){
	int sum=0, score, i;
	float average;
	
	printf("Please input the scores of all the students.\n");
	printf("Input a negetive number when you finish.\n");
	printf("\n");
	
	for(i=0; ;i++){
		scanf("%d", &score);
		if(score>=0)
			sum+=score;
		else break;
	}
	
	average=sum*1.0/i;
	printf("\n");
	printf("Average score is %.1f.", average);
	
	return 0;
}
