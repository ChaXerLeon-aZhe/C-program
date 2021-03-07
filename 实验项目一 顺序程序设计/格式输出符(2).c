#include<stdio.h>

int main()
{
	int a,b;
	float d,e;
	char c1,c2;
	double f,g;
	long n,m;
	unsigned p,q;
	
	a = 61; b = 62;
	c1 = a; c2 = b;
	f = 3156.890121; g = 0.123456789;
	d = f; e = g;
	p = a = m = 50000; q = b = n = -60000;
	
	printf("a=%d,b=%d\nc1=%c,c2=%c\nd=%6.2f,e=%6.2f\n", a, b, c1, c2, d, e);
	printf("f=%15.6f,g=%15.12f\nm=%ld,n=%ld\np=%u,q=%u\n", f, g, m, n, p, q);
	
	return 0;
}

