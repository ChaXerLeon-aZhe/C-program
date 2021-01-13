#include <stdio.h>
#include <string.h>
#define  N  7

int main(){
	char no[N][9]={"皖B51518","苏C82R28","沪AS7744",
					"苏EK626K","鲁B34369","浙ADM7M5","浙D53V35"};
	int i, js=0, zj=0, sh=0;
	
	printf("%d  %d  %d\n", no[1][0], no[5][0], no[2][0]);		/*查看苏浙沪首个字节对应的整型*/
	
	for(i=0; i<N; i++){
		if(*no[i] == -53) ++js;			//   "苏" => -53 
		else if(*no[i] == -43) ++zj;	//   "浙" => -43
		else if(*no[i] == -69) ++sh; 	//   "沪" => -69 
	}
	printf("江苏=%d  浙江=%d  上海=%d\n", js,zj,sh);
	
	return 0;
}
