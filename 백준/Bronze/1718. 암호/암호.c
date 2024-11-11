#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

char Se[30001], Sec[30001];
int len, i, len2;

int main()
{
	
	gets(Se);
	gets(Sec);

	len = strlen(Se); 
	len2 = strlen(Sec);

	for (i = 0; i < len; i++)
	{
		if (Se[i] == ' ') {
			printf(" ");
			continue;
		}
		Se[i] -= Sec[i%len2];
		Se[i] += 'a';
		Se[i] -= 1;
		//printf("%d %d\n", i % len2, Sec[i % len2]);
		if (Se[i] < 'a')Se[i] += 26;
		printf("%c", Se[i]);
	}
	
	return 0;
}


