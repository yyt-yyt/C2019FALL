#include<stdio.h>
#include<math.h>
int main()
{
	int x = 0;
	float y = 0;
	printf("���������x��ֵ\n");
	scanf("%d", &x);
	y = (x*x*x) + (2 * x*x) + (3 * x + 1);
	printf("y = %f\n", y);
	return 0;
}
