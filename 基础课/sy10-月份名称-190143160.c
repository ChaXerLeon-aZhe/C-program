	/*   ָ�뷽������һ�����������·ݺţ�������·ݵ�Ӣ������   */
	

#include <stdio.h>
#include <stdlib.h>

int main(){
	char *month_name[13]={"illegal month","January","February","March","April","May",
							"June","July","August","September","October","November","Demcember"};
	int n;
	
	scanf("%d", &n);
	
	printf("It is %s.\n", *(month_name+n));
	
	return 0;						
}
