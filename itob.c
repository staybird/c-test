#include<stdio.h>

#define MAX_SIZE 1000

void
itob(int n, char s[], int b);
void
reverse(char s[]);
int
main()
{
	char s[MAX_SIZE];
	int n, b;
	printf("input n:\n");
	scanf("%d", &n);
	printf("input b:\n");
	scanf("%d", &b);
	itob(n, s, b);
	printf("%s\n", s);
	return 0;
}

void
itob(int n, char s[], int b)
{
	int i, temp, sign;
	if ((sign = n) < 0)
		n = -n;
	i = 0;
	do{
		temp = n % b;
		switch (temp) {
			case 0: case 1: case 2: case 3: case 4:
			case 5: case 6: case 7: case 8: case 9:
				s[i++] = temp + '0';
				break;
			case 10:
				s[i++] = 'A';
				break;
			case 11:
				s[i++] = 'B';
				break;
			case 12:
				s[i++] = 'C';
				break;
			case 13:
				s[i++] = 'D';
				break;
			case 14:
				s[i++] = 'E';
				break;
			default:
				s[i++] = 'F';
				break;
		}
	} while ((n /= b) > 0);	
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

void 
reverse(char s[])
{
	int temp;
	int i, j;
	i = 0;
	while (s[i++] != '\0') 
		;
	j = i - 2;
	i = 0;
	while (i <= j){
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--j;
		++i;
	}
}
