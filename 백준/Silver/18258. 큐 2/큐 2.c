#include<stdio.h>
#include<string.h>

int arr[10000000] = { 0 },head=0,tail=0,cnt=0;
char command[10] = { 0 };

int main()
{
	int t,x;
	scanf("%d", &t);
	while (t--)
	{
		//printf("!: ");
		scanf("%s", command);
		
		if (!strcmp("push", command))
		{
			scanf("%d", &x);
			arr[tail] = x;
			tail++;
			cnt++;
		}
		else if (!strcmp("pop", command))
		{
			if (cnt > 0)
			{
				printf("%d\n", arr[head]);
				head++;
				cnt--;
			}
			else printf("-1\n");
		}
		else if (!strcmp("size", command))
		{
			printf("%d\n", cnt);
		}
		else if (!strcmp("empty", command))
		{
			if (cnt == 0)printf("1\n");
			else printf("0\n");
		}
		else if (!strcmp("front", command))
		{
			if (cnt > 0)printf("%d\n", arr[head]);
			else printf("-1\n");
		}
		else if (!strcmp("back", command))
		{
			if (cnt > 0)printf("%d\n", arr[tail - 1]);
			else printf("-1\n");
		}
	}





	return 0;
}