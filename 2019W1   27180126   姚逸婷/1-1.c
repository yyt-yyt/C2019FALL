#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	int i1;
	long int i2;
	signed long int i3;
	unsigned int i4;
	unsigned long int i5;
	short int i6;
	signed short int i7;
	unsigned short int i8;
	float x;
	double z;
	printf("char size=%1d\n", sizeof(c));
	printf("int size=%1d\n", sizeof(i1));
	printf("long int size=%1d\n", sizeof(i2));
	printf("signed long int size=%1d\n", sizeof(i3));
	printf("unsigned int size=%1d\n", sizeof(i4));
	printf("unsigned long int size=%1d\n", sizeof(i5));
	printf("short size=%1d\n", sizeof(i6));
	printf("signed short int size=%1d\n", sizeof(i7));
	printf("unsigned short int size=%1d\n", sizeof(i8));
	return 0;
}