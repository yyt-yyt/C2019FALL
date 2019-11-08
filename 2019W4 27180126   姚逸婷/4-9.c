#include<stdio.h>
#include<stdlib.h>
int Mod(int  a, int b, int c)
{
	int i = 1;
	a %= c;
	while (b)
	{
		if (b & 1)
			i = i*a%c;
		a = a*a%c;
		b >>= 1;

	}


	return i;
}


int main()
{
	long long int a = 0;
	long long int b = 0;
	int c = 0;
	printf("请输入a与b与c的值:\n");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("a^bmodc=%d", Mod(a, b, c));
	return 0;
}