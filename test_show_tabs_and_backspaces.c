#include<stdio.h>

main( ) {
	int c;
	while( (c = getchar()) != EOF) {
		if( c == ' ') 
			putchar('\\b');
		else if ( c == '\t' )
			putchar('\\t');
		else if ( c == '\\')
			putchar('\\');
	};
}
