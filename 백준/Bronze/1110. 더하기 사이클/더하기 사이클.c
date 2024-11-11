#include<stdio.h>
#include<string.h>

int main()
{
	int n, i,save,new_n=-1,count=0;
	scanf("%d", &n);
	save = n;

	while (save != new_n)
	{
		count++;
		new_n = (n % 10) * 10 + (n / 10 + n % 10) % 10;
		n = new_n;
	}
	printf("%d", count);

	return 0;
}