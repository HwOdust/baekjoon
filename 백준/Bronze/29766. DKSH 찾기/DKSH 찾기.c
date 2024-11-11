#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100000];
	int C=0, i;
	scanf("%s", arr);
	for (i = 0; i < strlen(arr); i++)
	{
		if (arr[i] == 'D' && arr[i + 1] == 'K' && arr[i + 2] == 'S' && arr[i + 3] == 'H')
		{
			C++;
			i += 3;
		}
	}
	printf("%d", C);
	return 0;
}