#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n, N, t;
	scanf("%d", &N);
	n = (int)sqrt(1.0*(N + 1) / 2);
	t = 2 * n - 1;
	for (int i = t; i>0; i -= 2)
	{
		for (int j = 0; j<(t - i) / 2; j++)
			printf(" ");
		for (int j = 0; j<i; j++)
			printf("*");
		printf("\n");
	}
	for (int i = 3; i <= t; i += 2)
	{
		for (int j = 0; j<(t - i) / 2; j++)
			printf(" ");
		for (int j = 0; j<i; j++)
			printf("*");
		printf("\n");
	}
	printf("%d\n", N + 1 - 2 * n*n);
	return 0;
}
