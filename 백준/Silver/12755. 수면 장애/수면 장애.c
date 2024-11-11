#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	int n, i, number=0, check = 0, range=9,jari=1,count=0,final=0,answer,save=9; //number=나열되는 수
	scanf("%d", &n); //n==1
	char S[100001];

	while(1)
	{
		check += jari; //4
		count += jari; //2
		final += jari; //11

		if(count==jari)
		{
			number++; //10 
			count = 0;
		}
		
		if (n <= final)
		{
			break;
		}

		if (number == range)
		{
			check = 0;
			range= range*10+9; //90 
			jari++; //2
		}
		
	}
	
	
	
	count = n % jari; //1
	sprintf(S, "%d", number);
	
	printf("%c", S[jari-1-final + n]);

	return 0;
}

	



