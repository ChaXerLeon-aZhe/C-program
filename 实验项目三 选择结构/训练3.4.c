#include <stdio.h>
int main()
{
	long num;
	int c1, c2, c3, c4, c5;
	scanf("%5d", &num);
	
	if (num>99999) printf("�������������λ��");
	else if (num<0) printf("���������һ������");
	else {
		c1=num/10000;
		c2=(num-c1*10000)/1000;
		c3=(num/100)%10;
		c4=(num/10)%10;
		c5=num%10;
		
		if(c1>0) 
		{
			printf("\n%ld��һ��5λ��\n",num);
	    	printf("���λ�ֱ�Ϊ��%1d,%1d,%1d,%1d,%1d\n", c1, c2, c3, c4, c5);
			printf("�������Ϊ��%1d%1d%1d%1d%1d\n",c5, c4, c3, c2, c1);
		}
		else if(c2>0)
		{
			printf("\n%ld��һ��4λ��\n",num);
	    	printf("���λ�ֱ�Ϊ��%1d,%1d,%1d,%1d\n", c2, c3, c4, c5);
			printf("�������Ϊ��%1d%1d%1d%1d\n",c5, c4, c3, c2);
		}
		else if(c3>0)
		{
			printf("\n%ld��һ��3λ��\n",num);
	    	printf("���λ�ֱ�Ϊ��%1d,%1d,%1d\n", c3, c4, c5);
			printf("�������Ϊ��%1d%1d%1d\n",c5, c4, c3);
		}
		else if(c4>0)
		{
			printf("\n%ld��һ��3λ��\n",num);
	    	printf("���λ�ֱ�Ϊ��%1d,%1d\n", c4, c5);
			printf("�������Ϊ��%1d%1d\n", c5, c4);
		}
		else if(c5>0)
		{
			printf("\n%ld��һ��3λ��\n",num);
	    	printf("���λ�ֱ�Ϊ��%1d,%1d\n", c5);
			printf("�������Ϊ��%1d%1d\n", c5);
		}
	}
	return 0;
}
