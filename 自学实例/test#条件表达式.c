#include <stdio.h>

int main()
{
	int w, x, y, z, m;
	
	w = 1; x = 2; y = 3; z = 4;
	
	m = (w<x) ? w : x;
	m = (m<y) ? m : y;
	m = (m<z) ? m : z;
	
	printf("%d", m);
	
	return 0;
}

