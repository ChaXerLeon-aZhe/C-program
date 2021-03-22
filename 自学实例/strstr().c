#include <stdio.h>
#include <string.h>

int main()
{
	char str_1[100], str_2[100];
	gets(str_1);
	gets(str_2);
	
	printf("%s", strstr(str_1, str_2));
	
	return 0;
}

