#include<stdio.h>
#include<stdlib.h>
int main()
{
	float f1 = 0;
	float f2 = 0;
	int i = 0;
	char c = 0;
	scanf("%f %d %c %f", &f1, &i, &c, &f2);
	printf("%c %d %f %.2f", c, i, f1, f2);
	return 0;
}