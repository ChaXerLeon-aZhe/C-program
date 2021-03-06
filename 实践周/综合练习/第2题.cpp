#include <stdio.h>
#include <math.h>
#define  N  7

int IsSquare(int n){
	int i, flag=0;
	
	for(i=1; i<=n; i++){
		if(i*i == n)
			flag = 1;
	}
	
	return flag;
}

int main(){
	char no[N][9]={"皖B51518","苏C82R28","沪AS7744",
					"苏EK626K","鲁B34369","浙ADM225","浙D53V35"};
	
	int i, j;
	
	for(i=0; i<N; i++){
		int t=0,sum=0;
		for(j=4; j<8; j++)
			if(no[i][j]>='0' && no[i][j]<='9')
				t++;				//统计后四位数字的个数 
		
		if(t != 4) continue;				//最后四位不都为数字时跳过此次循环
		else
			for(j=4; j<8; j++)
				sum = 10*sum + no[i][j] - 48;		//用sum存放最后四位的值 
		
		if (IsSquare(sum))
			printf("%s", no[i]);
	}
	
	printf("\n");
	return 0;
}
