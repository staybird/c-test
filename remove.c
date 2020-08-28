#include<stdio.h>

#define MAX_COMMENT_LEN 1000
int
main()
{
	FILE *fp = NULL;
	int c, is_comment = 0, flag = 0, comment_len = 0;
	char comment[MAX_COMMENT_LEN];
	fp = fopen("comment", "r");
	while ((c=fgetc(fp)) != EOF) {
		if (is_comment > 0) {
			if (c == '*' && flag == 0) {
				flag = 1;
			} else if ( c == '/' && flag == 1) {
				comment_len = 0;
				flag = 0;
				is_comment = 0;
			} else {
				comment[comment_len] = c;
				++comment_len;
				flag = 0;
			}
		} else {
			if ( c == '/' && flag == 0){
				comment[comment_len] = '/';
				++comment_len;
				flag = 1;
			} else if ( c == '*' && flag == 1) {
				flag = 0;
				comment[comment_len] = '*';
				++comment_len;
				is_comment = 1;
			} else if ( c == '/' && flag == 1 ) {
				putchar(c);
			} else if ( flag == 1) {
				flag = 0;
				comment[comment_len] = c;
				comment[comment_len + 1] = '\0';
				printf("%s", comment);
				comment_len = 0;
			} else {
				flag = 0;
				putchar(c);
			}
		}
	}
	if (is_comment > 0){
		comment[comment_len] = '\0';
		printf("%s", comment);
	}
	char *p = "/*abcd*/";
	fclose(fp);
	return 0;
}
