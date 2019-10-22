#include<stdio.h>
#include<stdlib.h>
int invert(int x, int p, int n)
{
	return ((~(x >> (p + 1 - n))&~(~0 << n)) << (p + 1 - n)) + (x >> (p + 1 - n) << (p + 1 - n) ^ x);
}
int main()
{
	int a, b, c;
	print("请分别输入被置换值，被置换值被置换的起始位，被置换值被置换的位数a, b, c的值，以空格隔开：");
	scanf("%d %d %d %d", &a, &b, &c);
	printf("result=%d", invert(a, b, c));
}