#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	void *p;
	int cnt;
	
	while ( p = malloc(100*1024*1024)){
		cnt++;
	}
	
	printf("������%dMB���ڴ�", cnt);
	
	return 0;
} 
