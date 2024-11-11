#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

int main()
{
	char dd[100001] = { 0 };
	int n,i,cnt=0;
	scanf("%d", &n);

	while (n--)
	{
		stack<char>s;
		scanf("%s", dd);
		for (i = 0; i < strlen(dd); i++)
		{
			if (s.empty())s.push(dd[i]);
			else
			{
				if (s.top() == dd[i])
				{
					s.pop();
				}
				else s.push(dd[i]);
			}
		}
		if (s.empty())cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}
