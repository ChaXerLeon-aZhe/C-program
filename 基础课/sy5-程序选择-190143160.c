#include <stdio.h>
#include <stdlib.h>

int main(){
	int score, grade, sum=0, i;
	int num;
	float average;
	
	while(1){
		printf("1   Grade Five Achievement\n");
		printf("2   Average Score\n");
		printf("3   Exit\n");
		printf("\n");
		
		scanf("%d", &num);
		printf("\n");
		
		if(num==1){
			printf("Input Your Score: ");
			scanf("%d", &score);
			printf("\n");
			
			while(score>100 || score<0){
				printf("Error, Not in the Score Range, Please Input Again:");
				scanf("%d", &score);
				printf("\n");
			}
			
			if(score>=90 && score<=100) grade='A';
			else if(score>=80) grade='B';
			else if(score>=70) grade='C';
			else if(score>=60) grade='D';
			else if(score<60) grade='E';
			
			printf("Your Corresponding Grade: %c\n", grade);
			printf("\n");
		}
		
		else if(num==2){
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
			printf("Average score is %.1f.\n", average);
			printf("\n");
		}
		
		else if(num==3)
			break;
		
		else{
			printf("Error, please type again.\n");
			printf("\n");
		}
		
		system("pause");
		system("cls");
	}
	
	return 0;
}
