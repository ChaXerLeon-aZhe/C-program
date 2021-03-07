#include <stdio.h>
int main()
{
	int n, i;
	double e, p, t;
	scanf("%d", &n);
	e = 1; t = 1;
	p = 1; i = 1;
	
	while (t >= 1e-7)
	{
		e += t;
		i++;
		p *= i;
		t = 1.0/p;
	}
	printf("%.6f", e);
	return 0;
}

