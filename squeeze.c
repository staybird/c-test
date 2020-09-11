#include<stdio.h>

#define MAX_SIZE 1000
int 
is_substr(char c, char str[]);
int
main()
{
	int isIn = 0, i = 0, j = 0, c;
	char str1[MAX_SIZE], str2[MAX_SIZE], targetStr[MAX_SIZE];
	scanf("%s", str1);
	scanf("%s", str2);
	while ((c = str1[i]) != '\0'){
		if (is_substr(c, str2) == 1){
			++i;
		} else {
			++i;
			targetStr[j] = c;
			++j;
		}
	}
	targetStr[j] = '\0';
	printf("%s\n", targetStr);
	return 0;
}

int
is_substr(char c, char str[])
{
	int i = 0, b;
	while ((b = str[i]) != '\0')
		if (b == c)
			return 1;
		else
			++i;
	return 0;
}
