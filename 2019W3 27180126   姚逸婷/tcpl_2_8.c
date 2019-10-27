#include<stdio.h>
#include<stdlib.h>
int rightrot(unsigned x, int n)
{
	int i, m, k;
	k = x;
	for (i = 0; k != 0; i++)
	{
		k = k >> 1;
	}
	for (m = 1; m <= n; m++)
	{
		x = ((x - ((x >> 1) << 1)) << (i - 1)) + (x >> 1);
	}
	
	return x;

}
int main()
{
int a, b;
printf("ÇëÊäÈëxµÄÖµ£º");
scanf("%d", &x);
printf("%d\n", rightrot(a, 2));
return 0;
}