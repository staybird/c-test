#include<stdio.h>

#define MAX_SIZE 1000

int get_line(char str[], int limit);
void my_reverse(char str[], int len);
main()
{
	char str[MAX_SIZE];
	int res = 0;
	while ( (res = get_line(str, MAX_SIZE)) != 0) {
		if ( res > 0 )
			my_reverse(str, res);
	}
}

int get_line(char str[], int limit)
{
	int c, i;
	for (i = 0; i < limit-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		str[i] = c;
	if (c == '\n'){
		if (i == 0){
			return -1;
		} else {
			str[i] = c;
			++i;
			str[i] = '\0';
		}
	}
	return i;
}

void my_reverse(char str[], int len)
{
	char reverseStr[MAX_SIZE];
	int i, j;
	if (str[len-1] == '\n'){
		j = 0;
		reverseStr[len-2] = '\0';
	}
	else {
		reverseStr[0] = str[len-2];
		reverseStr[len-1] = '\0';
		j = 1;
	}
	for (i = len - 3; i > 0; --i){
		reverseStr[j] = str[i];
		++j;	
	}
	printf("%s\n", reverseStr);
}
