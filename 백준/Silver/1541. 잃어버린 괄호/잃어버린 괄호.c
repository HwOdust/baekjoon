#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char s[51] = { 0 }, save[7] = { 0 };
	int sum = 0, i, check = 0,j=0;

	scanf("%s", s);
	for (i = 0; i < strlen(s); i++)
	{
		if ('0' <= s[i] && s[i] <= '9')save[j] = s[i];
		if (s[i + 1] != '+' && s[i + 1] !='-' && s[i + 1] != NULL)
		{
			j++;
			continue;
		}
		save[j + 1] = NULL;
		j = 0;
		if (s[i + 1] == '+' && check == 0)sum += atoi(save);
		else if (s[i + 1] == '-' && check == 0)
		{
			sum += atoi(save);
			check = 1;
		}
		else if (check == 1)sum -= atoi(save);
		else sum += atoi(save);

		sprintf(save, "%d", 0);
	}
	printf("%d", sum);
	return 0;
}
