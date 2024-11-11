#include<stdio.h>
#include<string.h>
int main()
{ 
	char buy[30] = { 0 };
	int sum=5000;
	gets(buy);
	for (int i = 0; i < strlen(buy); i++)
	{
		if (buy[i] == '1')sum -= 500;
		if (buy[i] == '2')sum -= 800;
		if (buy[i] == '3')sum -= 1000;
	}
	printf("%d", sum);
	return 0;
}

