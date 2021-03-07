#include <stdio.h>
int main()
{
	int x=1, i;
	
	for (i=9; i>=1; i--)
		x = 2 * (x+2);
	printf("%d", x);
	return 0;
}

