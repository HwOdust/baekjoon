#include<stdio.h>
#include <string.h> //strlen
#include <stdlib.h> //atoi
#include <math.h>



int main()
{
	char word[100] = { 0 };
	double arr[100] = { 0 };
	int len, b;
	int i;
	double suum=0;
	scanf("%s %d", word,&b);
	len = strlen(word);

	for (i = 0; i < len; i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
			arr[i] = word[i] - 'A' + 10;
			
		else
			arr[i] = word[i] - '0';
	}

	

	for (i = 0; i < len; i++)
	{
		suum += arr[i]* pow(b, len-i-1);
		
	}
	printf("%0.f", suum);
	return 0;
}