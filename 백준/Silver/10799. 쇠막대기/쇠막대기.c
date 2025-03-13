#include<stdio.h>
#include<string.h>
char stick[100001] = { 0 };
int main()
{
	int cnt = 0, sum = 0, tail = 0;
	scanf("%s", stick);
	for (int i = 0; i < strlen(stick); i++)
	{
		if (i <= strlen(stick) - 2 && stick[i] == '(' && stick[i + 1] == ')') //레이저 
		{
			sum += cnt;
			//cnt = 0;
			i++;
		}
		else if (stick[i] == '(')
		{
			cnt++;
			sum++;
		}
		else if (stick[i] == ')')cnt--;
		//printf("%d\n", sum);
	}
	printf("%d", sum);
	return 0;
}
// (())()