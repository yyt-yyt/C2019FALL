#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double R1, P1, R2, P2, R, P;
	scanf_s("%lf %lf %lf %lf", &R1, &P1, &R2, &P2);
	R = R1*R2;
	P = P1 + P2;
	double real, imag;
	real = R*cos(P);
	imag = R*sin(P);
	if (real<0 && real>-0.005)
		real = 0;
	printf("%.2f", real);
	if (imag > -0.005&&imag< 0)
		printf("+0.00i\n");
	else if (imag>0)

		printf("+%.2fi\n", imag);
	else
		printf("-%.2fi\n", -imag);


	return 0;
}