	/*   指针方法，编一个程序，输入月份号，输出该月份的英文名称   */
	

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
