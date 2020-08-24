#include<stdio.h>

int
main( ) {
	int c, blackFlag=0;
	while( (c = getchar()) != EOF) {
		if ( c == ' ' && blackFlag > 0 )
			++blackFlag;
		else {
			if ( c == ' ') 
				++blackFlag;
			else 
				blackFlag = 0;
			putchar(c);
		}
	}
	return 0;
}
