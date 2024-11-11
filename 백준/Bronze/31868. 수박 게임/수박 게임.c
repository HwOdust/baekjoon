#include<stdio.h>
#include<math.h>

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	n--;
	n = pow(2, n);
	printf("%d", k / n);

	return 0;
}
