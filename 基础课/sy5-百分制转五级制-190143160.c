
	/*	输入一个百分制成绩，程序判断这百分制成绩输出对应的五级制成绩	*/

#include <stdio.h>

int main(){
	int score, grade;
	
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
	
	printf("Your Corresponding Grade: %c", grade);
	printf("\n");
	
	return 0;
}
