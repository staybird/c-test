#include<stdio.h>

main() {
	int c, nc;
	while((c = getchar()) != EOF)
	{
		printf("%c", c);
		++nc;
	}
	printf("number of chars:%d.end by %d\n", nc, EOF);
}
