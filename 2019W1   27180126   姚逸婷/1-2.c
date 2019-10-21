#include<stdio.h>
#include<stdlib.h>
#define pai 3.14
int main()
{
	float radius = 0;
	printf("请输入圆的班级:\n");
	scanf("%f", &radius);
	
	double area = pai*radius*radius;
	double circumference = 2 * pai*radius;
	printf("圆的面积为:%lf", area);
	printf("圆的周长为:%lf", circumference);
		return 0;
}