#include<stdio.h>

#define MAX_SIZE 1000
int get_line(char str[], int lim);
main()
{
	char str[MAX_SIZE];
	int result = 0;
	while ((result = get_line(str, MAX_SIZE)) != 0)
		if (result > 0)
			printf("%s", str);
}

get_line(char str[], int lim)
{
	int c, i, c_b, c_t;
	c_b = c_t = 0;
	for (i = 0; i < lim && (c=getchar()) != EOF && c != '\n'; ++i)
	{
		if (c == ' ' )
			if (c_b > 0){
				--i;
				continue;
			} else {
				str[i] = c;
				++c_b;
			}
		else if (c == '\t')
			if (c_t > 0){
				--i;
				continue;
			} else {
				str[i] = c;
				++c_t;
			}
		else {
			str[i] = c;
			c_b = c_t = 0;
		}
	}
	int result = 0;
	if (c == '\n' && i == 0)
		result = -1;
	else if (c == '\n') {
			str[i] = c;
			++i;
			str[i] = '\0';
			result = i;
		}
	return result;
		
}
