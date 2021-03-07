#include <stdio.h>
#include <stdlib.h>

int main(){
	char *p, *q;
	q=p=(char*)malloc(sizeof(char)*20);
	scanf("%s%s", p, q);
	printf("%s%s", p, q);
}
