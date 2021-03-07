#include <stdio.h>
#include <string.h>

int main(){
	char *pmin, *name[]={"C#","BASIC","Pascal","Java","C++"};
	int i;
	
	pmin = name[0];
	for(i=1; i<5; i++)
		if(strlen(pmin) > strlen(name[i]))
			pmin = name[i];
	puts(pmin);
			
	return 0;
}
