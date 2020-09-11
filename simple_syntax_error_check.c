#include<stdio.h>

#define CHK_STR_SIZE 1000

int
main()
{
	// enum boolen { NO=1,YES=1} t = YES;
	// char str[CHK_STR_SIZE] = "hello, " "world";
	// printf("%s, %d", str, t);
	// t = NO;
	// printf("%s, %d", str, t);
	float f=0.00000000000001;
	double d = 1.234567899876;
	double r = f*d;
	printf("%d", r);
	return 0;
}
