#include <stdio.h>

int main(){
	char str[10] = "1,2,3,4,5";
	gets(str);
	strcat(str, "6789");
	printf("%s\n", str);
}
