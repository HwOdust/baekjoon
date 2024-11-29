#include<stdio.h>
#include<stdlib.h>


int main()
{
	char chess[9][9] = { 0 },x,horse=0;
	for (int i = 0; i < 8; i++)
	{
		for(int j=0;j<8;j++)
			scanf(" %c", &chess[i][j]);
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			//printf("%d\n", (i + j)%2);
			if ((i + j) % 2 == 0 && chess[i][j] == 'F')horse++;
		}
	}
	printf("%d", horse);

	return 0;
}
