#include<stdio.h>
#include<string.h>

int main()
{
	int count;
	char number[5];
	while (1)
	{
		scanf("%s", number);
		count = 0;
		if (number[0] == '0')return 0;
		for (int i = 0; i < strlen(number); i++)
		{
			if (number[i] == '1')count -= 1; 
			if (number[i] == '0')count += 1;
		}
		count += 4 * strlen(number) + 1;
		printf("%d\n", count);
	}
	return 0;
}
