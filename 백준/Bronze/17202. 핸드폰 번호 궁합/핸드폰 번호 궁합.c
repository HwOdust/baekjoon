#include<stdio.h>
#include<string.h>

int main()
{
	int i, sum = 0,str=16,s=0,a,b,xx=0;
	char num1[10] = { 0 }, num2[10] = { 0 }, ree[17] = { 0 };
	scanf("%s %s", num1, num2);
	for (i = 0; i < 8; i++)
	{
		ree[s] = num1[i];
		ree[s+1] = num2[i];
		s += 2;
	}
	while (str != 2)
	{
		for (int i = 0; i < str; i++)
		{
			xx = ree[i] - '0'+ ree[i+1] - '0';
			ree[i] = xx % 10+'0';
		}
		str--;
	}
	printf("%c%c", ree[0], ree[1]);
	return 0;
}