#include<stdio.h>
#include<stdlib.h>
unsigned setbits(int x, int p, int n, int y)
{
	return ((y >> n << n^y) << (p + 1 - n)) + (x >> (p + 1) << (p + 1)) + ((x >> (p + 1 - n) << (p + 1 - n)) ^ x);
}
int main()
{
	int a, b, c, d;
	printf("请分别输入被置换值，被置换值被置换的起始位，被置换值被置换的位数，置换值a,b,c,d的值，以空格隔开：");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	printf("result=%d", setbit(a, b, c, d));

	return 0;
}