#include<stdio.h>
#include<stdio.h>
int main()
{
	int data = 0, data1 = 0, data2 = 0;
	printf("������һ��0��153����������");
		scanf("%d", &data);
		if (data<0 || data>153)
			return 0;
		data1 = data % 16;
		data2 = data / 16 * 10 + data1;
		printf("%d", data2);
	return 0;
}