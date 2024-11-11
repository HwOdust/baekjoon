#include<stdio.h>
#include<string.h>
int main()
{
	char num[11], save[2];
	int i;
	scanf("%s", num);
	for (i = 0; i < strlen(num)-1; i++)
	{
		for (int j = 0; j < strlen(num) - 1; j++)
		{
			if (num[j] < num[j + 1])
			{
				save[0] = num[j];
				num[j] = num[j + 1];
				num[j + 1] = save[0];
			}
		}
	}
	printf("%s", num);
	return 0;
}
