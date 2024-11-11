#include<stdio.h>
#include<string.h>
int arr[100001];
char s[200001];
int main()
{
	int N, i, check = 0, max = 0, num, point = 0,ii=0,check2=0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);
		point = 0;
		for (int j = max+1; j <= num; j++)
		{
			arr[check] = j;
			check++;
			point++;
			s[ii] = '+';
			ii++;
		}
		if (arr[check - 1] != num)check2 = 1;
		arr[check - 1] = 0;
		check--;
		if (num > max)max = num;
		s[ii] = '-';
		ii++;
	}
	if (check2 == 1)
	{
		printf("NO");
		return 0;
	}
	for (i = 0; i < ii; i++)
	{
		printf("%c", s[i]);
		if (i < ii - 1)printf("\n");
	}
	return 0;
}