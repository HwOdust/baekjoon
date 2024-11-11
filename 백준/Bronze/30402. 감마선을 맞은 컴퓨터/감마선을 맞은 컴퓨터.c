#include<stdio.h>
#include<string.h>

int main()
{
	char p[15][15][2];
	int check = 0;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			scanf(" %c", p[i][j]);
			if (p[i][j][0] == 'w')check = 1;
			if (p[i][j][0] == 'b')check = 2;
			if (p[i][j][0] == 'g')check = 3;
		}
	}
	if (check == 1)printf("chunbae");
	if (check == 2)printf("nabi");
	if (check == 3)printf("yeongcheol");
	return 0;
}