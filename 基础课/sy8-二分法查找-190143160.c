	
	/*	sy8: ���Ӽ���������һ�������ж������Ƿ��������С�	*/
	

#include <stdio.h>
#define   M   10

int main(){
	int a[M]={-20, 1, 8, 18, 26, 65, 80, 90, 100, 150};
	int x, low, mid, high, found;
	low = 0;
	high = M-1;
	found = 0;
	printf("���ַ��������ݣ����ڣ�����������\n");
	printf("���������ݣ�-20, 1, 8, 18, 26, 65, 80, 90, 100, 150\n");
	printf("\n");
	printf("Input a number to be search:");
	scanf("%d", &x);
	printf("\n");
	
	while(low <= high){
		mid = (low+high)/2;
		if(x == a[mid]){
			found = 1;
			break;
		}
		
		else if(x > a[mid]){
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	
	if(found==1){
		printf("The index of %d is %d\n", x, mid);
	}
	else{
		printf("There is not %d\n", x);
	}
	return 0;
}
