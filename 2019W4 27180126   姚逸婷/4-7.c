#include<stdio.h>
#include<stdlib.h>
int Mod(int  a, int b, int c)
{
	int d = 1;
	a = a%c;
	for (int i = 1; i <= b; i++)

	{
		d *= a;
	}
	return d;
}


int main()
{
	long long int a = 0;
	long long int b = 0;
	int c = 0;
	printf("请输入a与b与c的值:\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("a^bmodc=%d", Mod(a, b, c));
	return 0;
}