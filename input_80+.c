#include<stdio.h>

#define MAX_SIZE 1000
#define PRINT_SIZE 8

int get_line(char string[], int len);

main()
{
	int len;
	char line[MAX_SIZE];
	while ((len = get_line(line, MAX_SIZE)) > 0)
		if (len > PRINT_SIZE)
			printf("%s\n", line);
}

int get_line(char string[], int len) 
{
	int c, i;
	for (i = 0; i < len-1  && (c=getchar())!=EOF && c!='\n'; ++i)
		string[i] = c;
	if ( c == '\n' )
	{
		string[i] = c;
		++i;
	}
	string[i+1] = '\0';
	return i;
}
