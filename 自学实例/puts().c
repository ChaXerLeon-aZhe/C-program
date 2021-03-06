#include <stdio.h>

int main(){
	char s[80], c = 'a';
	int i;
	scanf("%s", s);
	for(i=0; s[i]!='\0'; i++)
		if(s[i] == c)
			s[i] -= 32;
		else if(s[i] == c-32)
			s[i] += 32;
	puts(s);
}
