#include <stdio.h>
#include <math.h>

int primeNumber(int m){
	int i;  // ѭ������
	int k;  // m ��ƽ����
    
	if( m!=0 && m!=1 ){
		// ��ƽ������ע��sqrt()�Ĳ���Ϊ double ���ͣ�����Ҫǿ��ת��m������
	    k=(int)sqrt( (double)m );
	    
		for(i=2; i<=k; i++)
	        if(m%i==0)
	            break;
	    // ����������ѭ������ômΪ����
	    // ע�����һ��ѭ������ִ��i++����ʱ i=k+1��������i>k
	    if(i>k) return 1;
	    else return 0;
	}
	else return 0;
}

int main(){
	int m;
	printf("����һ��������");
    scanf("%d",&m);
    
	if(primeNumber(m))
		printf("%d��������\n",m);
	else
		printf("%d����������\n",m);
	return 0;
}

