#include<stdio.h>

#define BLANK_SIZE 5

main()
{
	int i, c, tflag, bflag;
	tflag = bflag = 0;
	char blank[BLANK_SIZE];
	for (i = 0; i < BLANK_SIZE - 1; ++i)
		blank[i] = ' ';
	blank[BLANK_SIZE-1] = '\0';
	while ((c = getchar()) != EOF){
		if (c == '\t'){
			if (tflag == 0){
				tflag = 1;
				printf("%s", blank);
			}
		} else if ( c == ' ' ){
			if (bflag == 0){
				bflag = 1;
				putchar(c);
			}
		} else {
			putchar(c);
			tflag = bflag = 0;
		}
	}
}
