#include<stdio.h>
#include<stdlib.h>
unsigned setbits(int x, int p, int n, int y)
{
	return ((y >> n << n^y) << (p + 1 - n)) + (x >> (p + 1) << (p + 1)) + ((x >> (p + 1 - n) << (p + 1 - n)) ^ x);
}
int main()
{
	int a, b, c, d;
	printf("��ֱ����뱻�û�ֵ�����û�ֵ���û�����ʼλ�����û�ֵ���û���λ�����û�ֵa,b,c,d��ֵ���Կո������");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	printf("result=%d", setbit(a, b, c, d));

	return 0;
}