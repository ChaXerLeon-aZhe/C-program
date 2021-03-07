#include <stdio.h>

int main()
{
	int y, m, d, yt, mt, dt, age;
	scanf("%d %d %d %d %d %d", &y, &m, &d, &yt, &mt, &dt);
	
	age = yt - y;
	
	if (mt < m)
		printf("%d", age--);
	else
		if (mt==m && dt<d)
			printf("%d", age--);
		else
			printf("%d", age);
	
	return 0;
}

