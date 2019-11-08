#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int step = 0;

	printf("请输入正整数n(0<n<1000):");
	scanf_s("%d", &n);
	int m = n;
	while (n != 1)
	{
		if (n % 2 == 0)

			n = n / 2;
		else
			n = (3 * n + 1) / 2;
		step++;



	}
	printf("正整数%d需要%d步才能得到n=1", m, step);

	return 0;
}