/*��Բ�ܳ��������Բ��������Բ�������*/

#include <stdio.h>
#define   PI   3.14159

int main()
{
	float r, h, L, s1, s2, v1, v2;
	
	printf("������Բ�İ뾶��Բ���ĸߣ�");
	scanf("%f %f", &r, &h);
	
	L = 2 * PI * r;
	s1 = PI * pow(r, 2);
	s2 = 4* PI * pow(r, 2);
	v1 = 4.0/3 * PI * pow(r, 3);
	v2 = PI * pow(r, 2) * h;
	
	printf("Բ�ܳ���%.2f\nԲ�����%.2f\n����������%.2f\n�������%.2f\nԲ�������%.2f\n", L, s1, s2, v1, v2);
	
	return 0;
}

