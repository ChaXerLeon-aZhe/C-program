#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	float disc, x1, x2;
	
	printf("������a��b��c��ֵ\n");
	scanf("%d %d %d", &a, &b, &c); 
	
	disc = pow(b, 2) - 4*a*c;
	
	if (disc >= 0)
	{
		x1 = (-b+sqrt(disc)) / (2*a);
		x2 = (-b-sqrt(disc)) / (2*a);
		printf("x1=%.2f\nx2=%.2f", x1, x2);
	}else
		printf("û��ʵ��");
	
	return 0;
}

