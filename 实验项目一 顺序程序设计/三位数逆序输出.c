#include <stdio.h>

int main()
{
	int n;
	int o, p, q;
	
	scanf("%d", &n);
	
	o = n / 100;
	p = n % 100 / 10;
	q = n % 10;
	
	printf("%d", q*100+p*10+o);
	
	return 0;
}

