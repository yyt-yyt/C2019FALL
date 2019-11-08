#include<stdio.h>
#include<stdlib.h>

int cal_p(char a[],int b)
{
	int i = 0, count = 0;
	while (a[i] != '\0')
	{
		if(a[i] - '0' == b )
			count ++ ;
		i++;
	}
	int cal = 0;
	for (int i = 0; i < count; i++)
	{
		cal += b;
		b *= 10;
	}
	return cal;
}
int main()
{
	char a[11], b[11];
	int da, db;
	scanf("%s %d %s %d", a, &da, b, &db);
	printf("%d", cal_p(a, da) + cal_p(b, db));

	return 0;
}