#include<stdio.h>
#include<string.h>
int main()
{
	char A[51] = { 0 }, B[51] = { 0 };
	int i, j, k,max=0,cnt;
	scanf("%s %s", A, B);

	for (i = 0; i < strlen(B)-strlen(A)+1; i++)
	{
		cnt = 0;
		j = 0;
		for (int k = i; k <i+strlen(A); k++)
		{
			if (A[j] == B[k])cnt++;
			j++;
		}
		if (cnt > max)max = cnt;
	}
	printf("%d", strlen(A) - max);
	return 0;
}