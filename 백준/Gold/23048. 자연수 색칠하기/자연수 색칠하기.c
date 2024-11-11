#include <stdio.h>
#include<stdlib.h>
int is_prime[500001] = { 0 };
int i, j;
int cnt = 1;
//0이면 소수
void era(int n)
{
    for (i = 2; i <= n; i++)
    {
        if (is_prime[i])continue;
        cnt++; 
        for (j = 1; i * j <= n; j++)
        {
            //if (i * j > 500000)break;
            //printf("%d %d\n", i, j);
            is_prime[i * j] = cnt;
        }
    }
}

int main()
{
    is_prime[0] = 1;
    is_prime[1] = 1;

    int x;
    scanf("%d", &x);
    era(x);

    
    printf("%d\n", cnt);
    for (int i = 1; i <= x; i++)printf("%d ", is_prime[i]);

    return 0;
}