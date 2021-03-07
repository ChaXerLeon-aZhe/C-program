/*求圆周长、面积、圆球表面积、圆柱体体积*/

#include <stdio.h>
#define   PI   3.14159

int main()
{
	float r, h, L, s1, s2, v1, v2;
	
	printf("请输入圆的半径和圆柱的高：");
	scanf("%f %f", &r, &h);
	
	L = 2 * PI * r;
	s1 = PI * pow(r, 2);
	s2 = 4* PI * pow(r, 2);
	v1 = 4.0/3 * PI * pow(r, 3);
	v2 = PI * pow(r, 2) * h;
	
	printf("圆周长：%.2f\n圆面积：%.2f\n球体表面积：%.2f\n球体积：%.2f\n圆柱体积：%.2f\n", L, s1, s2, v1, v2);
	
	return 0;
}

