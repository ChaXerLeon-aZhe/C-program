#include <stdio.h>
int main()
{
	int n, i=1, sum=0;
	scanf("%d", &n);
	
	while (i<=n)
	{
		if ((i%3==0) || (i%7==0))
			sum += i++;
		else i++;
	} 
	
	printf("%d", sum);
	return 0;
}

