
#include<stdio.h>
#include<time.h>
int Mod(int  a, int b, int c)
{
	int d = 1;
	a = a%c;
	for (int i = 1; i <= b; i++)

	{
		d *= a;
	}
	return d;
}
int QuickMod(int  a, int b, int c)
{
	int i = 1;
	a %= c;
	while (b)
	{
		if (b & 1)
			i = i*a%c;
		a = a*a%c;
		b >>= 1;

	}


	return i;
}
int main()
{
	long long int a = 0;
	long long int b = 0;
	int c = 0;
	printf("请输入a与b与c的值:\n");
	scanf("%d %d %d", &a, &b, &c);
	clock_t start_clock, end_clock;
	double elapsed_time;
	start_clock = clock();
    printf("a^bmodc=%d", Mod(a, b, c));
	end_clock = clock();
	elapsed_time = (double)(end_clock - start_clock);
	printf("%.6lf", elapsed_time);
	clock_t start_clock1, end_clock1;
	double elapsed_time1;
	start_clock1 = clock();
	printf("a^bmodc=%d",QuickMod(a, b, c));
	end_clock1 = clock();
	elapsed_time1= (double)(end_clock1- start_clock1);
	printf("%.6lf", elapsed_time1);
	return 0;
}