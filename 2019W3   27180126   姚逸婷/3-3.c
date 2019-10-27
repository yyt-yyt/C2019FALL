#include<stdio.h>
#include<stdlib.h>
int main()
{
	int F = 0;
	double C = 0;
	printf("ÇëÊäÈë»ªÊÏÎÂ¶È:\n");
	scanf("%d", &F);
	C = 5 * (F - 32) / 9;
	printf("Celsius=%d\n", C);
	return 0;
}