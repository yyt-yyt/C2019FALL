#include<stdio.h>
#include<stdlib.h>
int main()
{
	int data =0;
	int n = 0;
	printf("������һ����λ������:\n");
	scanf("%d", &data);
	for (int i = 0; i < 3; i++)
	{
		n = data % 10;
		if (n != 0 || i != 0)
			printf("%d", n);
		data = data / 10;
	}

	return 0;
}