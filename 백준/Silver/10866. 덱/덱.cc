#include<iostream>
#include<string.h>
using namespace std;
int deque[20001] = { 0 };
int a,f = 10000, b = 10000;
char ss[11] = { 0 };

void push_front(int item)
{
	deque[--f] = item;
}
void push_back(int item)
{
	deque[b++] = item;
}
void pop_front()
{
	if (f == b)printf("-1\n");
	else printf("%d\n", deque[f++]);
}
void pop_back()
{
	if (f == b)printf("-1\n");
	else printf("%d\n", deque[b-- - 1]);
}
void size()
{
	if (b == f)printf("0\n");
	else printf("%d\n", b - f);
}
void empty()
{
	if (b == f)printf("1\n");
	else printf("0\n");
}
void front()
{
	if (b == f)printf("-1\n");
	else printf("%d\n", deque[f]);
}
void back()
{
	if (b == f)printf("-1\n");
	else printf("%d\n", deque[b-1]);
}

int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%s", ss);
		if (strcmp(ss, "push_front") == 0)
		{
			scanf("%d", &a);
			push_front(a);
		}
		else if (strcmp(ss, "push_back") == 0)
		{
			scanf("%d", &a);
			push_back(a);
		}
		else if (strcmp(ss, "pop_front") == 0)pop_front();
		else if (strcmp(ss, "pop_back") == 0)pop_back();
		else if (strcmp(ss, "size") == 0)size();
		else if (strcmp(ss, "empty") == 0)empty();
		else if (strcmp(ss, "front") == 0)front();
		else back();

	}
	return 0;
}