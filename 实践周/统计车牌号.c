#include <stdio.h>
#include <string.h>
#define  N  7

int main(){
	char no[N][9]={"��B51518","��C82R28","��AS7744",
					"��EK626K","³B34369","��ADM7M5","��D53V35"};
	int i, js=0, zj=0, sh=0;
	
	printf("%d  %d  %d\n", no[1][0], no[5][0], no[2][0]);		/*�鿴���㻦�׸��ֽڶ�Ӧ������*/
	
	for(i=0; i<N; i++){
		if(*no[i] == -53) ++js;			//   "��" => -53 
		else if(*no[i] == -43) ++zj;	//   "��" => -43
		else if(*no[i] == -69) ++sh; 	//   "��" => -69 
	}
	printf("����=%d  �㽭=%d  �Ϻ�=%d\n", js,zj,sh);
	
	return 0;
}
