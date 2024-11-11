#include<stdio.h>

long long i, k, n, M,sum = 0, cnt = 0, arr[1000001] = { 0 }, mod,max=0;

int main()
{
	scanf("%lld %lld", &k, &n);
	for (i = 0; i < k; i++)
	{
		scanf("%lld", &arr[i]);
		sum += arr[i];
	}
	if (k == 1)
	{
		printf("%lld", arr[0]/n);
		return 0;
	}
	M = sum / n;
	for (i = 0; i < k; i++)
	{
		cnt += arr[i] / M;
	}
	if (cnt >= n)
	{
		printf("%lld", M);
		return 0;
	}
	for (i = 0; i < k; i++)
	{
		mod = arr[i]/(arr[i] / M + 1);
		cnt = 0;
		for (int j = 0; j < k; j++)
		{
			cnt += arr[j]/mod;
		}
		if (cnt >= n && mod >= max)max = mod;
     }
    long long maxi=max;
    for(i=1;i<6;i++)
    {
        maxi++;
        cnt=0;
        for(int j=0; j<k;j++)
        {
           cnt+=arr[j]/maxi;
        }
         if(cnt>=n)max=maxi;
      
    }
 	printf("%lld", max);

	return 0;
}
