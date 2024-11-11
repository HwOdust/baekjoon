#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>


int main()
{
	char arr[1000000];
	int s=1,count,i,final1=0,final2=0;
	 
	scanf("%s", arr);
	int len = strlen(arr);

	for (i = 0; i < len; i++) //index 0이 0일 떄//
	{
		if (s == 1)
		{
			if (arr[i] == '1')
			{
				final1++; //1
				s = 0;
			}
		}
		if (arr[i] == '0')s = 1;
	}
	
	s = 1;
	for (i = 0; i < len; i++) //index 0이 1일 떄//
	{
		if (s == 1)
		{
			if (arr[i] == '0')
			{
				final2++;
				s = 0;
			}
		}
		if (arr[i] == '1')s = 1;
	}
	if (final1 > final2)printf("%d\n", final2);
	else printf("%d\n", final1);
	
	return 0;
}


