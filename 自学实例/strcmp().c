#include <stdio.h>
#include <string.h>

int main(){
	char s1[] = "jiang", s2[] = "jiang yuzhe";
	if(strcmp(s1, s2)>0) printf("s1>s2\n");
	else printf("s1<s2\n");
	return 0;
}
