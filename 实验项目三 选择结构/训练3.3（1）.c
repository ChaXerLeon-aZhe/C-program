#include <stdio.h>
int main()
{
	float score;
	char grade;
	printf("score=");
	scanf("%f", &score);
	
	if (score>=90) grade = 'A';
	else if (score>=80) grade = 'B';
	else if (score>=70) grade = 'C';
	else if (score>=60) grade = 'D';
	else grade = 'F';
	
	printf("%.2f %c", score, grade);
	return 0;
}

