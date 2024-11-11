#include <stdio.h>
#include<stdlib.h>
int is_prime[10001];
//0이 소수
void era(int n)
{
    for (int i = 4; i <= n; i += 2)is_prime[i] = 1;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (is_prime[i]==1)continue;
        for (int j = i*i; j <=n ; j +=i )
        {
            is_prime[j] = 1;
        }
    }
}

int main()
{
    is_prime[0] = 1;
    is_prime[1] = 1;
    era(10000);
   
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int min = 10000, mmax = 0,xx,mmin=10000;
        scanf("%d", &xx);
        for (int i = xx / 2; i <= xx; i++)
        {
            if (is_prime[xx - i] == 0 && is_prime[i] == 0)
            {
                //printf("%d %d\n", xx - i, i);
                if (xx - 2 * i < min)
                {
                    min = xx - 2 * i;
                    if(xx-i>mmax)mmax = xx - i;
                   if(i<mmin) mmin = i;
                }
            }
        }
        printf("%d %d\n", mmax,mmin);
    }



}