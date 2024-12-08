#include<stdio.h>
#include<string.h>

int main()
{
	long long t,a,b,res;
	char what[2] = { 0 }, buf[2] = { 0 };
	scanf("%lld", &t);
	while (t--)
	{
		scanf("%lld ", &a);
		scanf("%c ", &what[0]);
		scanf("%lld ", &b);
		scanf("%c ", &buf[0]);
		scanf("%lld", &res);

		if (what[0] == '*')a *= b;
		else if (what[0] == '/')a /= b;
		else if (what[0] == '+')a += b;
		else if (what[0] == '-')a -= b;

		if (a == res)printf("correct\n");
		else printf("wrong answer\n");
	}

	return 0;
}