#include<stdio.h>
#include<math.h>
int main()
{
	int x = 0;
	int a = 0, b = 0, c = 0;
	float m = 0, n = 0;
	printf("���������x��ֵ\n");
	scanf("%d", &x);
	printf("���������x��ֵ\n");
	scanf("%d %d %d", &a, &b, &c);
	m = sqrt(abs(x));
	n = (4 * a) / (b*c);
	printf("m = %f\n", m);
	printf("n = %f\n", n);
	return 0;
}
