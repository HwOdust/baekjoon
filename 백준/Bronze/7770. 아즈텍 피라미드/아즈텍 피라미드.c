#include<stdio.h>
#include<math.h>

int main()
{
	int p[100000] = { 0 }, n, save,cnt=0,i=1,t=2;
	p[0] = 1;
	scanf("%d", &n);
	if (n < 6)
	{
		printf("1");
		return 0;
	}
	while (1)
	{
		cnt = 0;
		save = t;
		while (1)
		{
			cnt += pow(save, 2);
			save--;
			if (save == 0)break;
		}
		p[i] = cnt;
		if (p[i] > n)break;
		i++;
		t++;
	}
	i = 0;
	while (1)
	{
		if (p[i] + p[i + 1] > n)break;
		i++;
	}
	printf("%d", i+1);
	return 0;
}

