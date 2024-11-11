#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
int  arr[100001] = { 0 }, arr2[100001] = { 0 };
int main()
{
	int i, s, n, m;
	queue<int>suum;
	scanf("%d", &n);
	for (i = n-1; i>=0; i--)scanf("%d",&arr[i]);
	for (i = n - 1; i >= 0; i--)scanf("%d", &arr2[i]);
	for (i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{

			suum.push(arr2[i]);
		}
	}

	scanf("%d", &m);
	i = 0;
	while (m--)
	{
		scanf("%d", &s);
		suum.push(s);
		printf("%d ", suum.front());
		suum.pop();
		i++;
	}
	
	return 0;
}
