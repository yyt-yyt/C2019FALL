
#include <stdio.h>
#include<stdlib.h>

void convert(int n, int base)
{
	int i = 0;
	int a[100] = { 0 };
	if (base == 2 || base == 8)
	{

		int digit = 0;
		if (n == 0)
			return;
		convert(n / base, base);
		int digit = n%base;
		printf("%d", digit);
	}
	if (base == 16)
	{
		if (n == 0)
			return;
		convert(n / base, base);
		if (n % base > 9)
		{
			char a = '0';
			a = (n % base) - 10 + 'A';
			printf("%c", &a);
		}
		else
		{
			int b = 0;
			b = n%base;
			printf("%d", &b);
		}
	}


}
	int main()
	{
		int n = 0, base = 0;
		printf( "请输入要改变进制的十进制整数:\n" );
		scanf("%d", &n);
		printf("转换成2进制:\n");
		convert(n, 2);
		printf("转换成8进制:\n");
		convert(n, 8);
		printf("转换成16进制:\n");
		convert(n, 16);
			return 0;
	}

