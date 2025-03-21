#include<iostream>
#include<string>
#include<cmath>

using namespace std;
int load[100001] = { 0 }, oil[100001] = { 0 };

int main()
{
	long long n;
	long long cnt = 0, save = 0;
	scanf("%lld", &n);
	for (int i = 0; i < n - 1; i++)
	{
		scanf("%lld", &load[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &oil[i]);
	}
	long long minoil = oil[0];
	for (int i = 0; i < n-1; i++) //왼>>오
	{
		cnt += minoil * load[i];
		if (oil[i+1] < minoil)minoil = oil[i+1];
	}

	printf("%lld", cnt);

	return 0;
}