#include<stdio.h>
#include<stdlib.h>
int invert(int x, int p, int n)
{
	return ((~(x >> (p + 1 - n))&~(~0 << n)) << (p + 1 - n)) + (x >> (p + 1 - n) << (p + 1 - n) ^ x);
}
int main()
{
	int a, b, c;
	print("��ֱ����뱻�û�ֵ�����û�ֵ���û�����ʼλ�����û�ֵ���û���λ��a, b, c��ֵ���Կո������");
	scanf("%d %d %d %d", &a, &b, &c);
	printf("result=%d", invert(a, b, c));
}