#include <stdio.h>

int f(int n){
	if(n == 1)  return 1;
	else return f(n-1)+1;
}

int main(){
	int i, s=0;
	for(i=1; i<3; i++)
		s+=f(i);
	printf("%d\n", s);
}
