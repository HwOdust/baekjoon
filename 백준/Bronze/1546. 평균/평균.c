#include<stdio.h>
int main()
{
	int th, i, max=0;
	float score[1000];
	float sum = 0;
	scanf("%d", &th);

	for (i = 0; i < th; i++)
	{
		scanf("%f", &score[i]);

		if (score[i] > max)
		{
			max = score[i];
		}
	}
	

	for (i = 0; i < th; i++)
	{
		
		score[i] = score[i] / max * 100;
		sum += score[i];
	}

	sum /= th;
	printf("%f", sum);
	return 0;
}