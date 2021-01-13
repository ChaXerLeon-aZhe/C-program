#include <stdio.h>

int main(){
	char a[]="language", b[]="programm";
	char *p1=a, *p2=b;
	for(;*p2!='\0'; p1++, p2++)
		if(*p1 == *p2)
			printf("%c", *p1);
}
