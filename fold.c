#include<stdio.h>

#define LINE_SIZE 8

int get_line(char line[], int len);
main()
{
	int r;
	char line[LINE_SIZE+1];
	while ((r = get_line(line, LINE_SIZE)) != 0)
		if (r >= LINE_SIZE){
			if (line[LINE_SIZE - 1] == '\n')
				printf("%s", line);
			else 
				printf("%s\n", line);
		} else if ( r > 0 ){
			printf("%s", line);
		} else {
			printf("%s\n", line);
			break;
		}
}

int get_line(char line[], int len)
{
	int i, c;
	for (i = 0; i < len && (c=getchar())!=EOF && c!='\n'; ++i) {
		line[i] = c;
	}
	if (c == '\n'){
		line[i] = c;
		++i;
	} else if (c == EOF && i != 0) {
		line[i] = '\n';
		line[i+1] = '\0';
		return -1;
	}
	line[i] = '\0';
	return i;
}
