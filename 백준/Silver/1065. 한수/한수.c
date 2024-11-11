#include<stdio.h>
#include<string.h>
int main()
{
	int n, i, cnt = 99,check,ch2=0;
	char save[5] = { 0 };
	scanf("%d", &n);
	if (n<100)
	{
		printf("%d",n);
		return 0;
	}
	else if (n < 110)
	{
		printf("99");
		return 0;
	}

	for (i = 111; i <= n; i++)
	{
		sprintf(save, "%d", i);
		ch2 = 0;
		check = save[1] - save[0];
		for (int j = 1; j < strlen(save); j++)
		{
			if (save[j] - save[j - 1] != check)ch2 = 1;
		}
		if (ch2 == 0)cnt++;
	}
	printf("%d", cnt);
	return 0;
}