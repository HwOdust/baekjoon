#include<stdio.h>
#include<string.h>
int main()
{
	char color[11], goal[11];
	int cnt[4] = { 0 },i,ch=0;

	scanf("%s %s", color, goal);
	for (i = 0; i < strlen(color); i++)
	{
		if (color[i] == 'R')cnt[0]++;
		else if (color[i] == 'G')cnt[1]++;
		else if (color[i] == 'B')cnt[2]++;
		else if (color[i] == 'Y')cnt[3]++;
		if (goal[i] == 'R')cnt[0]--;
		else if (goal[i] == 'G')cnt[1]--;
		else if (goal[i] == 'B')cnt[2]--;
		else if (goal[i] == 'Y')cnt[3]--;
	}
	for (i = 0; i < 4; i++)
	{
		if (cnt[i] > 0)ch += cnt[i];
	}
	printf("%d", ch);
	return 0;
}
