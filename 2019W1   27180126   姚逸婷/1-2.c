#include<stdio.h>
#include<stdlib.h>
#define pai 3.14
int main()
{
	float radius = 0;
	printf("������Բ�İ༶:\n");
	scanf("%f", &radius);
	
	double area = pai*radius*radius;
	double circumference = 2 * pai*radius;
	printf("Բ�����Ϊ:%lf", area);
	printf("Բ���ܳ�Ϊ:%lf", circumference);
		return 0;
}