#include<iostream>

using namespace std;

int p[300001] = { 0 };

int find(int a)
{
	if (p[a] == a)return a;
	return p[a] = find(p[a]);
}

void uunion(int a, int b)
{
	a = find(a);
	b = find(b);
	p[b] = a;
}


int main()
{
	int n,a,b;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)p[i] = i;

	for (int i = 0; i < n - 2; i++)
	{
		scanf("%d %d", &a, &b);
		uunion(a, b);
	}
	if (n == 2)
	{
		printf("1 2"); 
		return 0;
	}
	int save = find(a);
	printf("%d ", save);
	for (int i = 1; i <= n; i++)
	{
		if (find(i) ==save)continue;
		printf("%d", find(i));
		break;
	}

	return 0;
}