#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 12, b = 34, temp = 0;
	printf("ԭֵΪ:a=%d,b=%d\n", a, b);
	temp = a^b;
	a = temp^a;
	b = temp^b;
	printf("λ���㽻�����ֵΪ:a=%d,b=5d\n", a, b);
	return 0;
}