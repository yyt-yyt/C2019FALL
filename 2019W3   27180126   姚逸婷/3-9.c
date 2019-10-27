#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 12, b = 34, temp = 0;
	printf("原值为:a=%d,b=%d\n", a, b);
	temp = a^b;
	a = temp^a;
	b = temp^b;
	printf("位运算交换后的值为:a=%d,b=5d\n", a, b);
	return 0;
}