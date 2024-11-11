#include<stdio.h>
#include<string.h>
int main()
{
	char s[4] = { 0 };
	double S = 0;
	scanf("%s", s);
	S += 69 - s[0];
	if (s[1] == '+')S += 0.3;
	if (s[1] == '-')S -= 0.3;
	if (s[0] == 'F')S = 0;
	printf("%0.1f", S);
	return 0;
}