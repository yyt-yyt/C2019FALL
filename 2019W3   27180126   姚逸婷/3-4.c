#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0,b=0,c=0,d=0;
	
	printf("请输入4个整数(用空格隔开)\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	float sum = 0;
	float average = 0;
	sum = a + b + c + d;
	average = sum / 4.0;
	printf("Sum=%d;Average=%f\n", sum, average);
	return 0;
}

