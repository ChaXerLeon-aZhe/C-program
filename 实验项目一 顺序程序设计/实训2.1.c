#include <stdio.h>

int main() 
{
	float c = 0, f = 0;

	printf("Input c : "); 
	scanf ("%f", &c );
	
	f = (9.0/5) * c + 32;
    
	printf( "c = %.2f, f = %.2f\n", c, f ) ;
	
	return 0;
}

