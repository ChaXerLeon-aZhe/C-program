#include<stdio.h>

int hcf(int u,int v){ //���������
	int t,r;
	if(v>u){t=u;u=v;v=t;}
	while((r=u%v)!=0)//����r��Ϊ0ʱ������շת�����
	{u=v;v=r;}
	return(v);
}

int lcm(int a, int b){ //����С������
    int r;
    r = hcf(a, b);
    return(a * b / r);
}

int main(){
    int x, y;
    printf("��������������:\n");
    scanf_s("%d %d", &x, &y);
    
    printf("�����������Լ��Ϊ��%d\n", hcf(x, y));
    printf("��������С������Ϊ��%d\n", lcm(x, y));
    return 0;
}

