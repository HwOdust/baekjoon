#include<stdio.h>
#include<string.h>

int main()
{
	char num[8];
	int cnt[10] = { 0 }, i,max=0;
	scanf("%s", &num);
	for (i = 0; i < strlen(num); i++)
	{
		cnt[num[i] - '0']++;
	}
	cnt[6] = cnt[6] + cnt[9];
	if (cnt[6] % 2 == 0)cnt[6] /= 2;
	else cnt[6] = cnt[6]/2 + 1;
	for (i = 0; i < 9; i++)
	{
		if (cnt[i] > max)max = cnt[i];
	}
	printf("%d", max);

	return 0;
}
