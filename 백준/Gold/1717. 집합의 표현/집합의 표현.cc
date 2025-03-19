#include<iostream>


using namespace std;
int arr[1000001] = { 0 },save=0;

int find(int a) //dfs
{
	int leader;
	if (arr[a] == a) //찾음
	{
		//arr[save] = a;
		return a;
	}
	else //리더아닐때
	{
		return find(arr[a]);
	}
}


void younion(int a,int b)
{
	int a2;
	int b2;
	a2 = find(a);
	b2 = find(b);
	if (a2 > b2)
	{
		arr[b2] = a2;
	}
	else
	{
		arr[a2] = b2;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m,x,a,b;
	cin >> n >> m;

	for (int i = 1; i <= n; i++)arr[i] = i;

	for (int i = 0; i < m; i++)
	{
		cin >> x >> a >> b;
		if (x == 0)
		{
			younion(a, b);
		}
		else if (x == 1)
		{
			int aa, bb;
			aa = find(a);
			arr[a] = aa;
			bb = find(b);
			arr[b] = bb;

			if (aa == bb)

			{
				printf("YES\n");
			}
			else printf("NO\n");
		}
	}


	
	return 0;
}

