#include <stdio.h>

int main()
{
	int i = 1, sum;
	
	do
	{
		sum = sum + i;
		i++;
	}while(i <= 100);
	
	printf("%d", sum); 
} 
