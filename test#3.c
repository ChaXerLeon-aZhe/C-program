#include <stdio.h>

int main(){
	int *p, a;
	a = 100;
	p = &a;
	a = *p+10;
	printf("%d\n", *p);
}
