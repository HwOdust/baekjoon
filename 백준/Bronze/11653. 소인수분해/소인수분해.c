#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>

int main() 
{
	int n,t=2;
	scanf("%d", &n); //9991
	while (n!=1)
	{
		if(n%t==0)
		{
			if (n / t % t == 0)
			{
				n /= t;
				printf("%d\n", t);
			}
			else if (n % t == 0)
			{
				n /= t;
				printf("%d\n", t);
				t++;
			}
		}
		else
		{
			t++;
		}
	}
	

	return 0;
}
