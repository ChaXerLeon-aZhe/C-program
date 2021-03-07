#include <stdio.h>
int main()
{
	int m, n, r, tm, tn;
	scanf("%d %d", &m, &n);
	tm = m;
	tn = n;
	
	if (m<n) 
	{
		r = m;
		m = n;
		n = r;
	}
	r = m%n;
	
	while (r)
	{
		m = n;
		n = r;
		r = m%n;
	}
	printf("%d %d", n, tm*tn/n);
	
	return 0;
}

