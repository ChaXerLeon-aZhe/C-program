#include <stdio.h>
int main()
{
	float x, y;
	scanf("%f", &x);
	
	if (x<0) y = 0;
	else if (x<5) y = x+2;
	else if (x<10) y = x*x - 3;
	else y = 10;
	
	printf("%.2f", y);
	return 0;
}

