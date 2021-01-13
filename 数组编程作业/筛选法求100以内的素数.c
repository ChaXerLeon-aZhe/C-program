#define N 100 
#include "stdio.h"
int main(){
	int i,j;
	int arr[N];
 
	for(i = 0;i<N;i++){//对数组赋值  1-100
		arr[i]=i+1;
	}
	arr[0] = 0;//1不是素数，所以将下标0 的元素设置为0
	
	//进行素数判断:我们将从2开始 用2除后面的数，如果后面的数能被2整除 那么那个数一定不是素数,将那个数置为零
	for(i = 1;i < N-1;i++){
		for(j = i+1;j < N;j++){
			if(arr[i] != 0 && arr[j] != 0)//如果进行到3的时候2后面一定有数被置为0了，这里我们需要判断一下是不是有0
			if(arr[j] % arr[i] == 0){
				arr[j] = 0;
			}
		}
	}
	//循环输出
	for(i = 0;i<N;i++){
		if(arr[i] != 0)
			printf("%d\n",arr[i]);
		
	}
 
	return 0;
}

