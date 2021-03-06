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
	char no[N][9]={"��B51518","��C82R28","��AS7744",
					"��EK626K","³B34369","��ADM225","��D53V35"};
	
	int i, j;
	
	for(i=0; i<N; i++){
		int t=0,sum=0;
		for(j=4; j<8; j++)
			if(no[i][j]>='0' && no[i][j]<='9')
				t++;				//ͳ�ƺ���λ���ֵĸ��� 
		
		if(t != 4) continue;				//�����λ����Ϊ����ʱ�����˴�ѭ��
		else
			for(j=4; j<8; j++)
				sum = 10*sum + no[i][j] - 48;		//��sum��������λ��ֵ 
		
		if (IsSquare(sum))
			printf("%s", no[i]);
	}
	
	printf("\n");
	return 0;
}
