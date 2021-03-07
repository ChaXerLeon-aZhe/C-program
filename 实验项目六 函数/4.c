#include<stdio.h>

int hcf(int u,int v){ //求最大公因子
	int t,r;
	if(v>u){t=u;u=v;v=t;}
	while((r=u%v)!=0)//余数r不为0时继续作辗转相除法
	{u=v;v=r;}
	return(v);
}

int lcm(int a, int b){ //求最小公倍数
    int r;
    r = hcf(a, b);
    return(a * b / r);
}

int main(){
    int x, y;
    printf("请输入两个整数:\n");
    scanf_s("%d %d", &x, &y);
    
    printf("两个整数最大公约数为：%d\n", hcf(x, y));
    printf("两个数最小公倍数为：%d\n", lcm(x, y));
    return 0;
}

