#include <stdio.h>
#include <string.h> 

int main(){
	char str[10];
	gets(str);
	strcat(str, "6789");
	printf("%s\n", str);
}
